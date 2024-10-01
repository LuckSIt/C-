#include <iostream>

using namespace std;

void placeOneWarship(bool m[10][10], int start_str, int finish_str, int start_col, int finish_col)
{
    int count = 0;
    while(count < 4) 
    {
        cout << "Input coordinate warships: ";
        cin >> start_str >> finish_col;
        m[start_str][finish_col] = true;
        ++count;
    }
    while(count < 10)
    {
        cout << "Input coordinate warships: ";
        cin >> start_str >> start_col >> finish_str >> finish_col;
        m[]   
    }
}

int main() 
{
    bool field1[10][10];
    bool field2[10][10];


}