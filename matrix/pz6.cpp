#include <iostream>

using namespace std;

int main() 
{
    int digits[5][5];
    int number = 0;
    int multiplier = 1;
    for (int i = 0; i < 5; ++i) 
    {
        for (int j = 0; j < 5; ++j) 
        {
            if(multiplier == 1) {
            digits[i][j] = number; 
            number += 1;
            }
            else {
                digits[i][4-j] = number;
                number += 1;
            }
        }
        multiplier *= -1;
    }
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j) cout << digits[i][j] << " ";
        cout << "\n";
    }
    

}
