#include <iostream>
#include <vector>

using namespace std;

vector<int> add(vector<int> vec, int value)
{
    vector<int> newVec(vec.size()+1);
    for (int i = 0; i < vec.size(); ++i) 
    
        newVec[i] = vec[i];
        newVec[vec.size()] = value;
    return newVec;
}

int main() 
{
    vector<int> vec = {};
    int N = 0, sum = 0;
    while (N >= 0) 
    {
        cin >> N;
        vec = add(vec, N);       
    }
    for(int i = 0; i < vec.size(); ++i) 
    {
        sum += vec[i];
    }
    cout << "Middle: " << sum/(vec.size()-1) << " Number: " << vec.size()-1;
}