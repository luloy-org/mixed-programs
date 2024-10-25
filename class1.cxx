
#include <iostream>
#include <string>
using namespace std;

//OOP or Object Oriented Programming
//C++ Class and Object

class Person {
    private://Private access specifier, cannot read and write outside the class
    //This method is called encapsulation
    //Keep sensitive data from accessing outside the class
    string username;
    string password;
    
    public://Public access specifier, can be read and write outside the class
    string name;
    int age;
    
    Person (string n/*Name*/, int a/*age*/){
        //Constructor for class properties
        name = n;
        age = a;
    }
};



int main(int argc, char *argv[])
{
	Person rey("Reymart", 19);
	Person jed("Jedrick", 56);
	
	cout<<rey.name<<", "+to_string(rey.age)<<endl;
	cout<<jed.name<<", "+to_string(jed.age)<<endl;
}