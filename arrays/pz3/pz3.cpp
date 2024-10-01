#include <iostream>
#include <cassert>

using namespace std;

float travelTime(float distance, float speed) 
{
    assert(speed > 0);
    float time;
    return time = speed/distance;
}
int main() 
{
    float s, v;
    cout << "Input distance: ";
    cin >> s;
    cout << "Input speed: ";
    cin >> v;
    cout << "Time = " << travelTime(s,v);
}