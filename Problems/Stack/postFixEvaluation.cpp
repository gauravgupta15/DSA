#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to evaluate a postfix expression
int evaluatePostfix(string postfix) {
    stack<int> s;

    for (char& c : postfix) {
        if (isdigit(c)) { // If the character is a digit, push its integer value onto the stack
            s.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') { // If the character is an operator
            int operand2 = s.top();
            s.pop();
            int operand1 = s.top();
            s.pop();

            // Perform the operation based on the operator
            if (c == '+')
                s.push(operand1 + operand2);
            else if (c == '-')
                s.push(operand1 - operand2);
            else if (c == '*')
                s.push(operand1 * operand2);
            else if (c == '/')
                s.push(operand1 / operand2);
        }
    }

    // The result is the only element left in the stack
    return s.top();
}

int main() {
    string postfix_expression;
    cout << "Enter the postfix expression: ";
    getline(cin, postfix_expression);

    int result = evaluatePostfix(postfix_expression);
    cout << "Result: " << result << endl;

    return 0;
}
