#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N, sum = 0;
    cin >> N;
    vector<int> vec(N);

    for(int i = 0; i < N; ++i) 
    {
        cin >> vec[i];  
        sum += vec[i];
    }
    cout << sum/N;
    
}
