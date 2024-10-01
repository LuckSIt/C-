#include <iostream>

using namespace std;

int main() 
{
    char speed_str[5] = "0.0";
    float speed_value;
    float speed = stof(speed_str);
    do 
    {
        cout << "Speed delta: ";
        cin >> speed_value;
        sprintf(speed_str, "%.1f", speed_value);
        speed += stof(speed_str);
        if(speed > 150.0) speed = 150.0;
        if(speed < 0) return 0; 
        cout << "Speed: " << speed << "\n";
    }
    while (speed > 0);
}