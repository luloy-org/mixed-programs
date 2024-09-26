#include<iostream>
#include<cmath>
#include<map>

using namespace std;

map<string, string> Operators = {
{"*", "Product of x and y"},
{"+", "Sum of x and y"},
{"-", "Subtraction of x and y"},
{"/", "Quotient of x and y"},
{"s", "Square root of x"},
{"l", "Natural logarithm of x"},
{"p", "Raise the value of x to the value of y"}
};

int calculate (int x,int y,char ope)
{
    int total;
    switch(ope) {
    case '+':
        total = x+y;
        break;
    case '-':
        total = x-y;
        break;
    case '*':
        total = x*y;
        break;
    case '/':
        total = x/y;
        break;
    case 's':
        total = sqrt(x);
        break;
    case 'l':
        total = log(x);
        break;
    case 'p':
        total = pow(x,y);
        break;
    default:
        cout << "Error calculating two numbers";
        return 0;
        break;
    }

    cout << "Total: " << total;
    return 0;
}

int main()
{
    int u1;
    int u2;
    char ope;
    cout << "What mathematical operation you want to use?\n";
    cout << "choose 1:\n";
    for (auto op : Operators){
    cout << op.first << " = " << op.second << "\n";
    };
    cout<<"Operation: ";
    cin>>ope;
    
    if (Operators[""+ope]==""){
    
    if (ope=='s' or ope=='l'){
    cout<<"Input the value of x: ";
    cin>>u1;
    calculate(u1,0,ope);
    } else {
    cout<<"Enter the value of x: ";
    cin>>u1;
    cout<<"Enter the value of y: ";
    cin>>u2;
    calculate(u1,u2,ope);
    }
    } else {
    cout<<"Your input is not in the choices";
    };
    return 0;
}
