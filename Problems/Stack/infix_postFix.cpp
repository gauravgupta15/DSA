
#include <iostream>
#include <stack>
#include <string>

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

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> s;
    string postfix;

    for (char& c : infix) {
        if (isalnum(c)) { // If the character is an operand, add it to the postfix expression
            postfix += c;
        } else if (c == '(') { // If the character is an opening parenthesis, push it onto the stack
            s.push(c);
        } else if (c == ')') { // If the character is a closing parenthesis
            while (!s.empty() && s.top() != '(') { // Pop operators from the stack and add to the postfix expression until a '(' is encountered
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove the '(' from the stack
        } else { // If the character is an operator
            while (!s.empty() && precedence(s.top()) >= precedence(c)) { // Pop operators with higher or equal precedence and add to the postfix expression
                postfix += s.top();
                s.pop();
            }
            s.push(c); // Push the current operator onto the stack
        }
    }

    // Pop remaining operators from the stack and add to the postfix expression
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    return postfix;
}

int main() {
    string infix_expression;
    cout << "Enter the infix expression: ";
    getline(cin, infix_expression);

    string postfix_expression = infixToPostfix(infix_expression);
    cout << "Postfix expression: " << postfix_expression << endl;

    return 0;
}
