#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    cout << "Input example: ";
    string buffer;
    cin >> buffer;
    stringstream temp_stream(buffer);
    double a; 
    double b;
    char operation;
    temp_stream >> a >> operation >> b;
}