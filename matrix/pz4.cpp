#include <iostream>

using namespace std;

void multiplication(float v[4], float m[4][4], float v1[4])
{
    int battery = 0;
    for(int i = 0; i < 4;++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            battery += v[j] * m[i][j];
        }
        v1[i] = battery;
        battery = 0;
    }
}

int main() 
{
    float b[4], c[4];
    float a[4][4];
    float battery = 0;
    for(int i = 0; i < 4; ++i)
    {
        cout << "Input element b: ";
        cin >> b[i];
        for (int j = 0; j < 4; ++j)
        {
            cout << "Input element a: ";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 4; ++i)
    {
        multiplication(b, a, c);
        cout << c[i] << "\n";
    }

}