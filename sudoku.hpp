#pragma once

class sudoku
{
private:
    int bord[9][9];
public:
    sudoku();
    sudoku(int(&s)[9][9]);
    void printBord();
    bool solveSudoku()
    {
        // find an empty cell (0)
        int row = -1, col = -1;
        bool isEmpty = false;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if (bord[i][j] == 0)
                {
                    row = i;
                    col = j;
                    isEmpty = true;
                    break;
                }
            }
            if (isEmpty)
            {
                break;
            }
        }
        if (!isEmpty)
        {
            return true; // the board is already solved
        }

        // try each number (1-9) in the empty cell
        for (int num = 1; num <= 9; num++)
        {
            if (isValid(row, col, num))
            {
                bord[row][col] = num;
                if (solveSudoku())
                {
                    return true;
                }
                bord[row][col] = 0;
            }
        }
        return false;
    }

private:
    bool isValid(int row, int col, int num)
    {
        // check row and column
        for (int i = 0; i < 9; i++)
        {
            if (bord[row][i] == num || bord[i][col] == num)
            {
                return false;
            }
        }

        // check 3x3 box
        int boxRow = row - row % 3;
        int boxCol = col - col % 3;
        for (int i = boxRow; i < boxRow + 3; i++)
        {
            for (int j = boxCol; j < boxCol + 3; j++)
            {
                if (bord[i][j] == num)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
