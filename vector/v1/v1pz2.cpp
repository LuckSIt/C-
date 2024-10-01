#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<float> vec(N);

    for(int i = 0; i < N; ++i) 
    {
        cin >> vec[i];
    }
    for (int i = N-1; i >= 0; --i)
    {
        cout << vec[i] << " ";
    }   
} 