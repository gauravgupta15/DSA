#include <iostream>
#include <stack>

using namespace std;

void TowerOfHanoi(int numDisks, stack<int>& source, stack<int>& target, stack<int>& auxiliary) {
    int totalMoves = (1 << numDisks) - 1; // Calculate the total number of moves

    for (int move = 1; move <= totalMoves; move++) {
        if (move % 3 == 1) {
            if (!source.empty() && (target.empty() || source.top() < target.top())) {
                target.push(source.top());
                source.pop();
                cout << "Move disk from source to target" << endl;
            } else {
                source.push(target.top());
                target.pop();
                cout << "Move disk from target to source" << endl;
            }
        } else if (move % 3 == 2) {
            if (!source.empty() && (auxiliary.empty() || source.top() < auxiliary.top())) {
                auxiliary.push(source.top());
                source.pop();
                cout << "Move disk from source to auxiliary" << endl;
            } else {
                source.push(auxiliary.top());
                auxiliary.pop();
                cout << "Move disk from auxiliary to source" << endl;
            }
        } else {
            if (!auxiliary.empty() && (target.empty() || auxiliary.top() < target.top())) {
                target.push(auxiliary.top());
                auxiliary.pop();
                cout << "Move disk from auxiliary to target" << endl;
            } else {
                auxiliary.push(target.top());
                target.pop();
                cout << "Move disk from target to auxiliary" << endl;
            }
        }
    }
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    stack<int> source, target, auxiliary;

    // Initialize the source stack with disks
    for (int i = numDisks; i >= 1; i--) {
        source.push(i);
    }

    TowerOfHanoi(numDisks, source, target, auxiliary);

    return 0;
}
