
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int weight;
    double height;
    double bmi;
    string categ;
    cout << "BMI Calculator\n";
    cout << "Weight(kg): ";
    cin >> weight;
    cout << "Height(m): ";
    cin >> height;
    height = height * height;
    bmi = weight / height;
    cout << "Result: \n";
    cout << "BMI: " << bmi << endl;

    switch (true):
	case (bmi<18.5):
	cout<<"Underweight";
    break;
default:
    cout << "An error occured, input the correct format\n";
}