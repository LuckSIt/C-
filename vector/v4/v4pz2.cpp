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
        while(vec.size() != 0 && vec[vec.size()-1] < a) //сравнение каждого элемента с предыдущим
        {
            vec.pop_back(); //удаление последнего элемента
        }
        vec.push_back(a); //добавление нового элемента
    }
    for (int i = 0; i < vec.size(); ++i) cout << vec[i] << " ";
}