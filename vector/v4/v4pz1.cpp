#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> vec; // объявление вектора, если неизвестно количество элементов в векторе и необходимо с клавиатуры добавлять элементы
    int a;
    for(int i = 0; a != -1; ++i) 
    {
        cout << "Input number: ";
        cin >> a;
        vec.push_back(a); // добавление элемента в конец вектора
    }
    for (int i = 0; i < vec.size(); ++i) cout << vec[i] << " ";
}