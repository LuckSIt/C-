#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> a = {2, 7, 11, 15};
    int result = 9;
    bool found = true;

    for(int i = 0; i < a.size()-1; ++i)
    {
        for (int j = 1; j < a.size(); ++j)
        {
            if(a[i] + a[j] == result) {
                cout << a[i] << " " << a[j];
                return 0;
            }
        }
    }
    if (found) cout << "error";
}