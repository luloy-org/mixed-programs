#include <iostream>
#include <string>

using namespace std;

//Method: Inheritance

/*

In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class

base class (parent) - the class being inherited from

*/

class Animal
{
    public:
    string type;
};

class Dog: public Animal{
    public:
    string noise (){
        return "Arf arf arf!";
    }
};

class Cat: public Animal{
    public:
    string noise (){
        return "Meow meow meow";
    }
};

int main()
{
}