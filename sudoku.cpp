#include <iostream>
#include "sudoku.hpp"

using namespace std;

void sudoku::printBord(){
    int counterRow = 0, counterLine = 0;
    for (int i = 0; i < 9; i++)
    {
        counterRow = 0;
        if (counterLine == 3)
        {
            cout << endl;
            counterLine = 0;
        }
        for (int j = 0; j < 9; j++){
            if (counterRow == 3)
            {
                cout << " " ;
                counterRow = 0;
            }
            cout << "[" <<bord[i][j] <<"]";
            counterRow++;
        }
        cout << endl;
        counterLine++;
    }
}

sudoku::sudoku()
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            bord[i][j] = 0;
        }
    }
}

sudoku::sudoku(int (&s)[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            bord[i][j] = s[i][j];
        }
    }
}

