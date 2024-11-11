#include<iostream>
#include<conio.h>
#include<map>
#include<vector>
#include<list>

using namespace std;

int NTS = 1;

int U = 1, //Upper
UL = 1,//Upper left
UR = 1,//Upper right
C = 1,//Center
LL = 1,//Lower left
LR = 1,//Lowet right
L = 1;//Lower

vector<int> Sequence = {U ,UL, UR, C, LL, LR, L};

//Sequence of numbers
map<int, vector<int>> Data = {
    {0,{1,1,1,0,1,1,1}},
    {1,{0,0,1,0,0,1,0}},
    {2,{1,0,1,1,1,0,1}},
    {3,{1,0,1,1,0,1,1}},
    {4,{0,1,1,1,0,1,0}},
    {5,{1,1,0,1,0,1,1}},
    {6,{1,1,0,1,1,1,1}},
    {7,{1,0,1,0,0,1,0}},
    {8,{1,1,1,1,1,1,1}},
    {9,{1,1,1,1,0,1,1}}
};

void DisplayNumber (int Value){
    //Check if number is in data
    if (Data.count(Value)!=0){
        int count = 0;
        for (int val : Data.at(Value)){ 
            //Set each value in sequence based on the value of variable [Value] in Data
            Sequence[count]=val;
            count++;
        }
    } else {
        cout<<"Number not found in data base\n";
    }
    //Initialize lines to print based on sequence
    vector<string> PrintedLines = {
    (Sequence[0]==1?" ___":""),
    (Sequence[1]==1?"|":" ")+string("   ")+(Sequence[2]==1?"|":" "),
    (Sequence[3]==1?" ---":""),
    (Sequence[4]==1?"|":" ")+string("   ")+(Sequence[5]==1?"|":" "),
    (Sequence[6]==1?" ---":"")
};
    for (const auto& line : PrintedLines){
        cout<<line<<endl;
    }
}

int main()
{
    clrscr ();
    DisplayNumber(3);
    
    return 0;
}
    