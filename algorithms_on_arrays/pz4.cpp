#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> vec = {-100, -50, -5, 1, 10, 15};
    
    for (int count = 0; count < 6; ++count)
    {
        int min = vec[0]; 
        for(int i = 0; i < vec.size(); ++i)
        {
            if(abs(vec[i]) < abs(min)) min = vec[i];
        }
        cout << min << " ";
        
        vec.erase(remove(vec.begin(), vec.end(), min), vec.end());
    }
}
