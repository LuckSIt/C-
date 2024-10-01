#include <iostream>
#include <vector>

using namespace std;

vector<int> add_to_position(vector<int> vec, int val, int position)
{
    vector<int> newVec(vec.size()+1);
    for (int i = 0; i < vec.size(); ++i) 
    
        newVec[i] = vec[i];
        newVec[vec.size()] = val;
    return newVec;
}