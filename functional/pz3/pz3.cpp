#include <iostream>
#include <string>

using namespace std;

string get_address_part(string ip, int octetNum) {
    string result;
    int currentOctet = 0;

    for (char c : ip) {
        if (c == '.') {
            currentOctet++;
            if (currentOctet == octetNum) {
                return result;
            }
            result.clear();
        } else {
            result += c;
        }
    }

    return result;
}

bool isValidOctet(string octet) {
    if (octet.length() > 3 || octet.length() < 1) {
        return false;
    }

    for (char c : octet) {
        if (c < '0' || c > '9') {
            return false;
        }
    }

    int num = stoi(octet);
    return num >= 0 && num <= 255;
}

int main() {
    string ip;
    int i;
    cout << "Input IP: ";
    cin >> ip;
    cout << "Input oktet: ";
    cin >> i;

    //for (int i = 1; i <= 4; ++i) {
        string octet = get_address_part(ip, i);
        if (isValidOctet(octet)) {
            cout << "Octet " << i << ": " << octet << " is valid\n";
        } else {
            cout << "Octet " << i << ": " << octet << " is invalid\n";
        }
    //}
}
