#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numbers;

    while (true) {
        int num;
        cout << "Input number: ";
        cin >> num;

        if (num == -1) {
            if (numbers.size() < 5) {
                cout << "There are not enough numbers to withdraw the fifth most increase\n";
            } else {
                sort(numbers.begin(), numbers.end());
                cout << "Fifth most increase number: " << numbers[4] << "\n";
            }
        } else if (num == -2) {
            break;
        } else {
            numbers.push_back(num);
        }
    }
}
