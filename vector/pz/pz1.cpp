#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n;
    cout << "Enter vector size: ";
    cin >> n;
    vector<int> vec(n);

    for(int i = 0; i < n; ++i)
    {
        cout << "Enter numbers: ";
        cin >> vec[i];
    }
    int x;
    cout << "Enter number to delete: ";
    cin >> x;

    for(int i = vec.size()-1; i >= 0; --i) 
    {
        if(x == vec[i]) 
        {
            swap(vec[i], vec[vec.size()-1]);
            vec.pop_back();
        }
    }
    if(vec.empty()) cout << "All elements have been removed";
    else cout << "Result: ";
    for (int i = 0; i < vec.size(); ++i) cout << vec[i] << " ";
}