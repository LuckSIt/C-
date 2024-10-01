#include <iostream>
#include <regex>
using namespace std;

bool checkEmail(string email) {
    regex pattern("[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\\.[a-zA-Z0-9-.]{2,}");
    return regex_match(email, pattern);
}

int main() {
    string user_email;
    cout << "Введите email-адрес для проверки: ";
    cin >> user_email;

    if (checkEmail(user_email)) {
        cout << "Email-адрес корректен.\n";
    } else {
        cout << "Email-адрес некорректен.\n";
    }

    return 0;
}
