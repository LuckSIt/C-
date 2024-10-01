#include <iostream>

using namespace std;

string encrypt_caesar(string text, int code, string newText)
{
    for (int i = 0; i < text.length(); ++i)
    {
    if (text[i] == ' ') newText += ' ';
    if(text[i] >= 'a' && text[i] <= 'z')
        {
          newText += (text[i] - 'a' + code) % 26 + 'a';
        }
    if(text[i] >= 'A' && text[i] <= 'Z')
        {
        newText += (text[i] - 'A' + code) % 26 + 'A';
        }
    }
    return newText;
}

int main()
{
    string str;
    int b;
    string newStr;
    cout << "Text: ";
    getline(cin, str);
    cout << "Code: ";
    cin >> b;
    cout << encrypt_caesar(str, b, newStr) << endl;



}
