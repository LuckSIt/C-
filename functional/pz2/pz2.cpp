#include <iostream>
#include <regex>
using namespace std;

bool checkEmail(string email) {
    regex pattern("^[a-zA-Z0-9!#$%&'*+/=?^_{|}~]+(\\.[a-zA-Z0-9!#$%&'*+/=?^_{|}~]+)*@[a-zA-Z0-9-]+(\\.[a-zA-Z0-9-]+)+$");
    return regex_match(email, pattern);
}

int main() {
    string user_email;
    cout << "Input email: ";
    cin >> user_email;

    if (checkEmail(user_email)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }

    return 0;
}
