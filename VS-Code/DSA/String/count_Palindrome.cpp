#include <iostream>
#include <sstream>
using namespace std;

// Function to check if a word is a palindrome
bool isPalindrome(const string& word) {
    int i = 0;
    int j = word.length() - 1;
    while (i <= j) {
        if (word[i] != word[j]) { // If characters don't match, it's not a palindrome
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    string str = "nitin is my good a madam";
    stringstream ss(str);
    string word;
    int cnt = 0;
    
    while (ss >> word) {
        if (isPalindrome(word)) { // Check if the word is a palindrome
            cnt++; // Increment the count if it is
        }
    }
    
    cout << "Number of palindromic words: " << cnt << endl;

    return 0;
}
