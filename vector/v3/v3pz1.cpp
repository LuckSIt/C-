#include <iostream>
#include <vector>

using namespace std;

vector<int> del_pos(vector<int> pos, int position)
{
    swap(pos[pos.size()-1], pos[position]);
    pos.resize(pos.size()-1);
    return pos;
}

int main() 
{
    int N;
    cout << "Input N: ";
    cin >> N;
    vector<int> pos(N);

    for(int i = 0; i < N; ++i) 
    {
        cout << "Input number robot: ";
        cin >> pos[i];
    }
    for (int i = 0; i < N; ++i) cout << pos[i] << " ";

    int M, a;
    cout << "\n" << "Input M: ";
    cin >> M;

    for (int i = 0; i < M; ++i) 
    { 
        cout << "Input robots index for buy: ";
        cin >> a;
    }
        cout << del_pos(pos, a);
    
}