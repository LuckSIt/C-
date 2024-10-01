#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string surname[10];
    for (int i = 0; i < 10; ++i) 
    {
        cout << "Input surname " << i << " tenant: ";
        cin >> surname[i];
    }
    for (int i = 0; i < 3; ++i) 
    {
        int apartmentNumber;
        cout << "Input apartment number: ";
        cin >> apartmentNumber;
        if (apartmentNumber < 0 || apartmentNumber > 9) 
        {
            cout << "There is no such apartment";
            break;
        }
        else 
        {
            cout << surname[apartmentNumber] << "\n";
        }
    }
}