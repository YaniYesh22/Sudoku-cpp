#include <iostream>
#include "sudoku.hpp"

using namespace std;
int main(){
    int sudokuBord[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    sudoku myBord(sudokuBord);
    myBord.printBord();

    if (myBord.solveSudoku() == false)
    {
        cout << "The sudoko dont have an answer - Goodbye :("<< endl;
        return 0;
    }
    else{
    cout << endl<<"The Answer !!! :))))" << endl << endl;

    myBord.printBord();
}
}