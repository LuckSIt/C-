#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> vec; // объявление вектора, если неизвестно количество элементов в векторе и необходимо с клавиатуры добавлять элементы
    int a;
    for(int i = 0; i < vec.capacity(); ++i) 
    {
        cout << "Input number: ";
        cin >> a;
        vec.push_back(a); //добавление нового элемента
        if(vec[i] == -1) break;
    }
    for (int i = 0; i < vec.size(); ++i) cout << vec[i] << " ";
}