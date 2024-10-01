#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    int max_sum = a[0];
    int start_index = 0;
    int end_index = 0;
    
    for (int i = 0; i < a.size(); ++i) 
    {
        int current_sum = 0;
        for (int j = i; j < a.size(); ++j)
        {
            current_sum += a[j];
            if (current_sum > max_sum)
            {
                max_sum = current_sum;
                start_index = i;
                end_index = j;
            }
        }
    }
    cout << "Elements with maximum sum: " << start_index << " и " << end_index;
}
