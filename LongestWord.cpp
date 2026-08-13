#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longest;

    while (ss >> word) {
        if (word.length() > longest.length()) {
            longest = word;
        }
    }

    cout << "Longest word: " << longest << endl;

    return 0;
}