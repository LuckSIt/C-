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
    int max = vec[0];
    for (int i = 1; i < N; ++i)
    {
        if(vec[i] > vec[i-1]) max = vec[i];
    }
    cout << max;
}