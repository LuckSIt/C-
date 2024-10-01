#include <iostream>

using namespace std;

bool compare(int m1[4][4], int  m2[4][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "Input element matrix 1: ";
            cin >> m1[i][j];
            cout << "Input element matrix 2: ";
            cin >> m2[i][j];
            if (m1[i][j] == m2[i][j]) continue;
            else return false;
        }
    }
    return true;
}

void diagonalMatrix(int m1[4][4])
{
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (i != j) m1[i][j] = 0;
        }
    }
}

int main()
{
    int matrix1[4][4];
    int matrix2[4][4];
    if (compare(matrix1, matrix2)) 
    {
        diagonalMatrix(matrix1);
        for (int i = 0; i < 4; ++i)
        {
            for (int j = 0; j < 4; ++j)
            {
                
                cout << matrix1[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else cout << "Matrices are not equal";

}