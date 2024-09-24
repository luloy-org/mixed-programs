#include<iostream>
using namespace std;




string FullName (string fn,string mn,string ln){
cout << "Full name: ";
cout << fn + " " + mn[0]+". "+ln;
return "null";
}


int main()
{
    string fn;
    string mn;
    string ln;
    cout << "Input first name: " << endl;
    cin >> fn;
    cout << "Input middle name:\n";
    cin >> mn;
    cout << "Input last name:\n";
    cin >> ln;
    FullName(fn,mn,ln);
    
    return 0;
}