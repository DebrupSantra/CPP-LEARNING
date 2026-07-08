#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (str1.length() != str2.length()) {
        cout << "Not Anagrams";
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < str1.length(); i++) {
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    bool anagram = true;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "Strings are Anagrams";
    else
        cout << "Strings are Not Anagrams";

    return 0;
}