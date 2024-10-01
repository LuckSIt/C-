#include <iostream>

using namespace std;

// Функция для инициализации пупырки
void initBubbleWrap(bool bubbleWrap[][12]) {
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            bubbleWrap[i][j] = true;
        }
    }
}

// Функция для отображения состояния пупырки
void displayBubbleWrap(bool bubbleWrap[][12]) {
    for (int i = 0; i < 12; ++i) {
        for (int j = 0; j < 12; ++j) {
            cout << (bubbleWrap[i][j] ? "o " : "x ");
        }
        cout << "\n";
    }
}

// Функция для лопания региона пупырок
void popBubbles(bool bubbleWrap[][12], int startRow, int startCol, int endRow, int endCol) {
    if (startRow < 0 || startRow >= 12 || startCol < 0 || startCol >= 12 ||
        endRow < 0 || endRow >= 12 || endCol < 0 || endCol >= 12) {
        cout << "Error" << "\n";
    }

    for (int i = startRow; i <= endRow; ++i) {
        for (int j = startCol; j <= endCol; ++j) {
            if (bubbleWrap[i][j]) {
                bubbleWrap[i][j] = false;
                cout << "Pop! ";
            }
            cout << "\n";
        }
    }
}

int main() {
    bool bubbleWrap[12][12];
    initBubbleWrap(bubbleWrap);

    displayBubbleWrap(bubbleWrap);

    int startRow, startCol, endRow, endCol;
    while (true) {
        cout << "Input coordinate start and finish (start_string start_colomn finish_string finish_colomn): ";
        cin >> startRow >> startCol >> endRow >> endCol;

        popBubbles(bubbleWrap, startRow, startCol, endRow, endCol);
        displayBubbleWrap(bubbleWrap);

        bool allPopped = true;
        for (int i = 0; i < 12; ++i) {
            for (int j = 0; j < 12; ++j) {
                if (bubbleWrap[i][j]) {
                    allPopped = false;
                    break;
                }
            }
            if (!allPopped) {
                break;
            }
        }

        if (allPopped) {
            cout << "The end" << "\n";
            break;
        }
    }
}
