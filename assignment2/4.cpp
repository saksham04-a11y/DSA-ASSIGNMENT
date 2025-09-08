#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string concat(string st1, string st2) {
    st1.append(st2);
    return st1;
}
string reverse_str(string st1) {
    reverse(st1.begin(), st1.end());
    return st1;
}
string delete_vowels(string s) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch;  
        }
    }
    return result;
}
string sort_str(string st1) {
    sort(st1.begin(), st1.end());
    return st1;
}
char upp_to_low(char ch) {
    return tolower(ch);
}

int main() {
    string str1, str2;
    char ch;

    cout << "Enter first string : ";
    cin >> str1;
    cout << "Enter second string : ";
    cin >> str2;
    cout << "Concatenated String: " << concat(str1, str2) << endl;

    cout << "\nEnter a string to reverse : ";
    cin >> str1;
    cout << "Reversed String: " << reverse_str(str1) << endl;

    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = delete_vowels(input);
    cout << "String without vowels: " << output << endl;

    
    cout << "\nEnter a string to sort characters: ";
    cin >> str1;
    cout << "Sorted String: " << sort_str(str1) << endl;

    
    cout << "\nEnter an uppercase character: ";
    cin >> ch;
    cout << "Lowercase: " << upp_to_low(ch) << endl;

    return 0;
}
