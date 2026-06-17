#include <iostream>
#include <string>
#include <sstream>
int countWords(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}
int main() {
    std::string mySentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, mySentence); // Use getline to read the entire line
    int wordCount = countWords(mySentence);
    std::cout << "Word count: " << wordCount << std::endl;
    return 0;
}