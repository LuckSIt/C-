#include <iostream>

using namespace std;

int main() 
{
    int cultery[2][6] = {{4, 3, 3, 3, 3, 3}, {4, 3, 3, 3, 3, 3}};
    int dishes[2][6] = {{3, 2, 2, 2, 2, 2}, {3, 2, 2, 2, 2, 2}};
    int chairs[2][6] = {{1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 1, 1}};
    chairs[0][4] += 1;
    cultery[1][2] -= 1;
    cultery[0][0] -= 1;
    cultery[1][2] += 1;
    dishes[0][0] -= 1;
}