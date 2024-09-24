#include<iostream>
using namespace std;

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
    cout << "Input first number" << endl;
    cin >> u1;
    cout << "Input second number" << endl;
    cin >> u2;
    cout << "What mathematical operation you want to use?\n" << "choose 1:\n+ = Addition\n- = Subtraction\n* = Multiplication\n/ = Division\nOperator: ";
    cin >> ope;
    calculate(u1, u2, ope);
    return 0;
}
    