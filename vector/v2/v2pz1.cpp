#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N, num = 0, a;
    cin >> N;
    vector<float> vec(N);

    for(int i = 0; i < N; ++i) 
    {
        cout << vec[i] + num << " - ";
        cin >> a;
        vec[i] = a;
        ++num;
    }
    for (int i = 0; i < N; ++i) 
    {
    cout << vec[i] << " ";
    }

}