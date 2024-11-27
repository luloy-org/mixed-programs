#include<iostream>

using namespace std;

float result;
float x;
float y;
char choice;

void main()
{
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	cout<<"Choose operation: + - / *\n";
	cin>>choice;
	
	//Process section
	if (choice=='+'){
	    result = (x + y);
	} else if (choice == '*'){
	    result = (x * y);
	} else if (choice == '-'){
	    result = (x - y);
	} else if (choice == '/'){
	    
	    if (y == 0){
	        cout<<"Cannot divide x to 0\n";
	    } else {
	        result = (x / y);
	    }
	    
	} else {
	    cout<<"Input not in the choices\n";
	}
	
	cout<<"Result: "<<result;
}