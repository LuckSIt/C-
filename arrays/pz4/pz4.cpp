#include <iostream>

using namespace std;

int main() 
{
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    int sum = 0;
    for(int i = 0; i < 15; ++i) 
    {
        sum += numbers[i];
    }
    int res = 0;
    int x = 105;
    for (int i = 0; i < 15; ++i) 
    {
        res += x;
        x++;
    }
    int repeat;
    repeat = res - sum;
    repeat = x - repeat - 1;
    cout << "Repeatable number: " << repeat;
}