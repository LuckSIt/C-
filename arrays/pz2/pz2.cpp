#include <iostream>

using namespace std;

void swap(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

int main() 
{
    float number[15];
    for(int i = 0; i < 15; ++i) 
    {
        cin >> number[i];
    }

    float numb[15];
    numb[0] = number[0];
    for (int i = 1; i < 15; ++i) {
        numb[i] = number[i];
        for (int j = i; j > 0 && numb[j] > numb[j - 1]; --j) {
            swap(numb[j], numb[j - 1]);
    }
    }
    
    for (int i = 0; i < 15; ++i) 
    {
        cout << numb[i] << " ";
    }
    
}