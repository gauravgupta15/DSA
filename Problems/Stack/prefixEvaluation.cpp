#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

// Function to evaluate a prefix expression
int evaluatePrefix(string prefix) {
    stack<int> s;

    // Scan the prefix expression from right to left
    for (int i = prefix.size() - 1; i >= 0; i--) {
        char c = prefix[i];

        if (isdigit(c)) { // If the character is a digit, push its integer value onto the stack
            s.push(c - '0');
        } else if (c == '+' || c == '-' || c == '*' || c == '/') { // If the character is an operator
            int operand1 = s.top();
            s.pop();
            int operand2 = s.top();
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
    string prefix_expression;
    cout << "Enter the prefix expression: ";
    getline(cin, prefix_expression);

    int result = evaluatePrefix(prefix_expression);
    cout << "Result: " << result << endl;

    return 0;
}
