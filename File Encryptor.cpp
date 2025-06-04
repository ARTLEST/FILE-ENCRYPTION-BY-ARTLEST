#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    string message;
    int choice;
    
    cout << "=== Simple Text Encryptor ===" << endl;
    cout << "Enter password: ";
    cin >> password;
    
    cout << "\nWhat do you want to do?" << endl;
    cout << "1. Encrypt text" << endl;
    cout << "2. Decrypt text" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore(); // Clear input buffer
    
    cout << "Enter your text: ";
    getline(cin, message);
    
    // Encryption/Decryption (XOR works both ways)
    string result = "";
    
    for (int i = 0; i < message.length(); i++) {
        // XOR each character with password character
        char encryptedChar = message[i] ^ password[i % password.length()];
        result += encryptedChar;
    }
    
    if (choice == 1) {
        cout << "\nOriginal text: " << message << endl;
        cout << "Encrypted text: " << result << endl;
        cout << "\n(Copy the encrypted text to decrypt it later)" << endl;
    } else if (choice == 2) {
        cout << "\nEncrypted text: " << message << endl;
        cout << "Decrypted text: " << result << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
