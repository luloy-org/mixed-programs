#include <iostream>
#include <vector>
#include <cstdlib>
#include <ncurses.h>
#include <utility>
#include <string>

using namespace std;
const int c = 35;
const int r = 35;
const int onVal = 1;
const int offVal = 0;
bool rendering = true;

vector<vector<int>> matrix(c,vector<int>(r, offVal));

class square {
    private:
    vector<int> ps = {
        0,//Column
        0//Row
        };
    vector<int> sc = {1,1};
    public:
    bool fill = false;
    void position (int x, int y){
        ps = {x, y};
    }
    void scale (int x, int y){
        sc = {x, y};
    }
    void render (){
        
        int leftBorder;
        int rightBorder;
        leftBorder=(ps[1]-sc[0]);
        rightBorder=(ps[1]+sc[0]);
        
        for (int count = 0; count < sc[0]; count++){
            matrix[ps[0]][leftBorder+count]=onVal;
            matrix[ps[0]][rightBorder-count]=onVal;
        }
        matrix[ps[0]][leftBorder]=onVal;
        matrix[ps[0]][rightBorder]=onVal;
        matrix[ps[0]][ps[1]]=onVal;
    }
};

void resetMatrix (){
    matrix = std::vector<std::vector<int>>(c, std::vector<int>(r, 0));
}

int main() {
    square sq;

    sq.position((c/2), (r/2));
    sq.scale(3,3);
    
    // Display the initial matrix
    while(rendering){
        system("cls");
        resetMatrix();
        sq.render();
        cout<<"Matrix: \n";
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << (elem==onVal?"0":"-") << "-";
        }
        std::cout << std::endl;
    }
    }
    return 0;
}