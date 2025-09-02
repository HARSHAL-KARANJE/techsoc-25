#include <iostream>
#include <string>
using namespace std;

string caesarcipher(string text, int shift)
{
    string result = "";
    for (char c : text)
    {
        if (isupper(c))
        {
            result += char(int((c - 'A' + shift) % 26) + 'A');
        }
        else if (islower(c))
        {
            result += char(int((c - 'a' + shift) % 26) + 'a');
        }
        else
        {
            // non-alphabetical characters remain unchanged
            result += c;
        }
    }
    return result;
}

int main()
{
    string message;
    int shift;

    cout << "ENTER MESSAGE: ";
    getline(cin, message);

    cout << "Enter shift value: ";
    cin >> shift;

    string encrypted = caesarcipher(message, shift);

    cout << "Encrypted Message: " << encrypted << endl;

    return 0;
}
