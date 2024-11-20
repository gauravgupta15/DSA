
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to get the precedence of an operator
int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else
        return 0; // for '('
}

// Function to reverse a string
void reverseString(string& str) {
    reverse(str.begin(), str.end());
}

// Function to convert infix expression to prefix expression
string infixToPrefix(string infix) {
    stack<char> s;
    string prefix;

    // Reverse the infix expression
    reverseString(infix);

    for (char& c : infix) {
        if (isalnum(c)) { // If the character is an operand, add it to the prefix expression
            prefix += c;
        } else if (c == ')') { // If the character is a closing parenthesis, push it onto the stack
            s.push(c);
        } else if (c == '(') { // If the character is an opening parenthesis
            while (!s.empty() && s.top() != ')') { // Pop operators from the stack and add to the prefix expression until a ')' is encountered
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Remove the ')' from the stack
        } else { // If the character is an operator
            while (!s.empty() && precedence(s.top()) > precedence(c)) { // Pop operators with higher precedence and add to the prefix expression
                prefix += s.top();
                s.pop();
            }
            s.push(c); // Push the current operator onto the stack
        }
    }

    // Pop remaining operators from the stack and add to the prefix expression
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    // Reverse the final prefix expression to get the correct order
    reverseString(prefix);

    return prefix;
}

int main() {
    string infix_expression;
    cout << "Enter the infix expression: ";
    getline(cin, infix_expression);

    string prefix_expression = infixToPrefix(infix_expression);
    cout << "Prefix expression: " << prefix_expression << endl;

    return 0;
}
