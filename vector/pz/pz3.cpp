#include <iostream>
#include <vector>

using namespace std;

void addItem(vector<int>& buffer, int& currentIdx, int value) {
    buffer[currentIdx] = value;
    currentIdx = (currentIdx + 1) % buffer.size();
}

void printBuffer(vector<int>& buffer, int currentIdx) {
    int start = currentIdx;
    for (int i = 0; i < buffer.size(); ++i) {
        cout << buffer[start] << " ";
        start = (start + 1) % buffer.size();
    }
    cout << "\n";
}

int main() {
    vector<int> circularBuffer(20);
    int currentIdx = 0;

    int value;
    while (true) {
        cout << "Input number: ";
        cin >> value;

        if (value == -1) {
            printBuffer(circularBuffer, currentIdx);
        }
        
        addItem(circularBuffer, currentIdx, value);
    }
}
