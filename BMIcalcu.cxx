
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
	int weight;
	float height;
	float bmi;
	string categ;
	cout << "BMI Calculator\n";
	cout << "Weight(kg): ";
	cin >> weight;
	cout << "Height(m): ";
	cin >> height;
	height = height * height;
	bmi = weight / height;
	cout << "Result: \n";
	cout<<"---------------"<<endl;
	
	if (bmi < 18.5){
		categ="Underweight";
	} else if (bmi == 18.5 or bmi < 24.9){
		categ="Normal";
	} else if (bmi == 25 or bmi < 29.9){
		categ="Overweight";
	} else if (bmi >= 30){
		categ="Obese";
	};
	cout<<"BMI: "<<bmi<<endl;
	cout<<"CATEGORY: "<<categ<<endl;
	cout<<"---------------"<<endl;
}
