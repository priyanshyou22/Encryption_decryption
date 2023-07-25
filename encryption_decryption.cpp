#include <iostream>
#include <string>
using namespace std;
string encryptCaesar(const string& message, int shift) {
    string encryptedMessage = "";
    for (char c : message) {
        if (isalpha(c)) {
            char shiftedChar = (toupper(c) - 'A' + shift) % 26 + 'A';
            encryptedMessage += shiftedChar;
        } else {
            encryptedMessage += c;
        }
    }
    return encryptedMessage;
}

 string decryptCaesar(const string& encryptedMessage, int shift) {
    return encryptCaesar(encryptedMessage, 26 - shift);
}

int main() {
    string message;
    int shift;

    cout << "Enter a message: ";
    getline(cin, message);

    cout << "Enter a shift value: ";
    cin >> shift;

    string encrypted = encryptCaesar(message, shift);
    cout << "Encrypted message: " << encrypted << endl;

    string decrypted = decryptCaesar(encrypted, shift);
    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}