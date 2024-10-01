#include <iostream>
#include <cctype>
#include <string>

bool checkNickname(std::string nickname) {
    if (nickname.length() < 8) {
        return false;
    }
    
    bool digit = false;
    bool upper = false;
    bool lower = false;
    
    for (char a : nickname) {
        if (std::isdigit(a)) {
            digit = true;
        } else if (std::isupper(a)) {
            upper = true;
        } else if (std::islower(a)) {
            lower = true;
        }
    }
    
    return digit && upper && lower;
}

int main() {
    std::string nickname;
    
    std::cout << "Enter nickname: ";
    std::cin >> nickname;
    
    if (checkNickname(nickname)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}
