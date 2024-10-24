#include <iostream>
#include <map>
#include <cmath>
#include <string>

using namespace std;
// This is a prototype console calculator
// I will soon try to use classes to decrease the numbers of line as much as possible

// [ Global Declaration Area ]

//List of operations for the user to choose
map<string, string> Operations = {
    {"+", "Get the sum of x and y"},
    {"-", "Decrease the value of x by y"},
    {"/", "Divide the value of x to the value of y"},
    {"*", "Get the product of x and y"},
    {"L", "Get the natural logarithm of x"},
    {"P", "Raise the value of x to the power of y"},
    {"S", "Get the square root of x"},
    {"O", "Log base 10 of x"},
    {"V", "View recent calculations"},
    {"s", "Sin of x"},
    {"c", "Cos of x"},
    {"t", "Tan of x"},
    {"E", "Exit calculator"}
};

map<string, string> Logs = {};

//Calculation section
int calculate(double x, double y, string choice)
{
    // [ Local Declaration Area ]
    //This is where the system process calculation
    double total;
    bool error = false;
    switch (choice[0])
    {
    case '+':
        total = (x + y); //Set the result as the value of total
        break;
    case '-':
        total = (x - y);
        break;
    case '/':
        total = (x / y);
        break;
    case '*':
        total = (x * y);
        break;
    case 'L':
        total = (log(x));
        break;
    case 'P':
        total = (pow(x, y));
        break;
    case 'S':
        total = (sqrt(x));
        break;
    case 'O':
        total = (log10(x));
        break;
    case 's':
        total = (sin(x));
        break;
    case 'c':
        total = (cos(x));
        break;
    case 't':
        total = (tan(x));
        break;
    case 'V':
        error = true;// Tells the system whether it will show result or not
        break;
    default:
        cout << "An error occured" << endl;
        error = true;
        return 0;
        break;
    }
    //Display result if there's no error'
    if (error == false)
    {
        cout << "Result: " << total << endl;
        // Add log to logs for the user to view recent calculations
        string sx = " x: " + to_string(x) + " |";
        string sy = " y: " + to_string(y) + " |";
        string result = " Result: " + to_string(total) + " |";
        string ope = " Operation: " + choice + " |";
        Logs[choice] = ope + sx + sy + result;
        return 1;
    }
}

//Input process section
int main()
{
    //Preparation section
    string choice;// String variable for choice
    string con; // String variable for Y/N
    double x;// First Number
    double y;// Second Number
    while (true)
    {
        //Starting point
        cout << "Choose operation: \n";
        int sort = 1;//Assign numbers per choices
        //List all operations in map, for choices
        for (auto ope : Operations)
        {
            cout << sort << ".(" << ope.first << ") - " << ope.second << endl;
            sort++;
        }
        //Get x and y
        cout << "Choice: ";
        cin >> choice;
        
        if ((choice[0] == 'L' || choice[0] == 'S' || choice[0] == 'O') && choice.length() == 1)//Using if and else statement to ignore unexpected inputs that will cause an error
        {
            //For single number calculation
            cout << "Enter the value of x: ";
            cin >> x;
        }
        else if (choice == "V" && choice.length() == 1)
        {
            //Show logs
            cout << "Performed calculations log: \n";
            for (auto log : Logs)
            {
                cout << "[" + log.second + "]\n";
            }
        }
        else if (choice == "E" && choice.length() == 1)
        {
            //Exit calculator
            cout << "Bye!! :)" << endl;
            break;
        }
        else if ((Operations.count(choice) != 0) && choice.length() == 1)
        {
            //For two sets of numbers
            cout << "Enter the value of x: ";
            cin >> x;
            cout << "Enter the value of y: ";
            cin >> y;
        }
        else
        {
            cout << "Invalid choice\n";
        }
        //Catch failure if the user entered letter(s) instead of number
        //Also to prevent the program to repeat continuosly
        if (cin.fail() && choice != "V")
        {
            cout << "\n"
                    "Failure occured, Make sure to input numbers not letters\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            // Continue to calculation if the user inputs the expected data type for x and y
            calculate(x, y, choice);
        }
        //Repeat process until user entered either "Y" or "N"
        while (true)
        {
            cout << "Perform another calculation? Y/N: ";
            cin >> con;
            if (con[0] == 'Y' or con[0] == 'N')
            {
                break;
            }
            else
            {
                //Show unexpected inputs
                cout << con[0] << "?" << endl;
            }
        }
        if (con == "N")
        {
            //Exit calculator
            cout << "Bye!!!\n";
            break;
        }
    }
}
