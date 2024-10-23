#include <iostream>
#include <map>
#include <cmath>
#include <string>

using namespace std;

//List of operations for the user to choose
map<string, string> Operations = {
	{"+", "Get the sum of x and y"},
	{"-", "Decrease the value of x by y"},
	{"/","Divide the value of x to the value of y"},
	{"*","Get the product of x and y"},
	{"L","Get the natural logarithm of x"},
	{"P","Raise the value of x to the power of y"},
	{"S","Get the square root of x"}
};

int calculate(int x, int y, string choice)
{
	//This is where the system process calculation
	int total;
	bool error=false;
	switch(choice[0]){
		case '+':
		total=(x+y);//Set the result as the value of total
		break;
		case '-':
		total=(x-y);
		break;
		case '/':
		total=(x/y);
		break;
		case '*':
		total=(x*y);
		break;
		case 'L':
		total=(log(x));
		break;
		case 'P':
		total=(pow(x,y));
		break;
		case 'S':
		total=(sqrt(x));
		break;
		default:
		cout<<"An error occured"<<endl;
		error=true;
		break;
	}
	//Display result if there's no error'
	if (error==false){
		cout<<"Result: "<<total<<endl;
	}
}

int main()
{
	string choice;
	string con;
	int x;
	int y;
	while (true){
		//Starting point
		cout<<"Choose operation: \n";
		int sort = 1;
		//List all operations in map, for choices
		for (auto ope : Operations){
			cout<<sort<<".("<<ope.first<<") - "<<ope.second<<endl;
			sort++;
		}
		//Get x and y
		cout<<"Input: ";
		cin>>choice;
		if ( (choice[0]=='L' || choice[0]=='S') && choice.length()==1){
			cout<<"Enter the value of x: ";
		    cin>>x;
		} else if ((Operations.count(choice)!=0) && choice.length()==1){
			cout<<"Enter the value of x: ";
			cin>>x;
			cout<<"Enter the value of y: ";
			cin>>y;
		} else {
			cout<<"Invalid choice\n";
		}
		calculate(x,y, choice);
		//Repeat process until user entered either "Y" or "N"
		while(true){
			cout<<"Perform another calculation? Y/N: ";
			cin>>con;
			if (con[0]=='Y' or con[0]=='N'){
				break;
			} else {
				cout<<con[0]<<"?"<<endl;
			}
		}
		if (con=="N"){
			cout<<"Bye!!!\n";
			break;
		}
	}
}

