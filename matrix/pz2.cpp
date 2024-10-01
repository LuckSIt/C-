#include <iostream>

using namespace std;

bool winnerX(char arr[3][3])
{
    for (int a = 0; a < 3; ++a)
        {
            if(arr[a][0] == 'X' && arr[a][1] == 'X' && arr[a][2] == 'X') return true;
        }
    for (int b = 0; b < 3; ++b)
        {
            if(arr[0][b] == 'X' && arr[1][b] == 'X' && arr[2][b] == 'X') return true;
        }
    return false;
}   
bool winnerO(char arr[3][3])
{
    for (int a = 0; a < 3; ++a)
        {
            if(arr[a][0] == 'O' && arr[a][1] == 'O' && arr[a][2] == 'O') return true;
        }
    for (int b = 0; b < 3; ++b)
        {
            if(arr[0][b] == 'O' && arr[1][b] == 'O' && arr[2][b] == 'O') return true;
        }
    return false;
}   

int main() 
{
    char playingField[3][3] = {{' ', ' ', ' '},
                               {' ', ' ', ' '},
                               {' ', ' ', ' '}};
    bool places[3][3] = {{false, false, false},
                         {false, false, false},
                         {false, false, false}};
    int count = 0;
    while(count != 9)
    {
        int i, j;
        cout << "Input coordinate: ";
        cin >> i >> j;
        if (i < 0 || i > 2 || j < 0 || j > 2) 
        {
            cout << "You are out of bounds\n";
            continue;
        }
        else 
        {
            if(places[i][j] == false) 
            {
            cout << "Input symbol (X or O): ";
            cin >> playingField[i][j];
            places[i][j] = true;
            }
            else 
            {
                cout << "This cell is occupied\n";
                continue;
            }
        }
        for(int a = 0; a <3; ++a) 
        {
            for (int b = 0; b < 3; ++b) 
            {
                cout << playingField[a][b] << " ";
            }
            cout << "\n";
        }
        if (winnerX(playingField)) 
        {
            cout << "Winner: X";
            break;
        }
        else if (winnerO(playingField))
        {
            cout << "Winner: O";
            break;
        }
        ++count;
        if(count == 9) cout << "Draw";
    }
    
}