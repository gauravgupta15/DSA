#include <iostream>

using namespace std;

// Function to move disks from source peg to destination peg using aux peg
void towerOfHanoi(int numDisks, char source, char destination, char aux) {
    if (numDisks == 1) {
        cout << "Move disk 1 from peg " << source << " to peg " << destination << endl;
        return;
    }

    towerOfHanoi(numDisks - 1, source, aux, destination);
    cout << "Move disk " << numDisks << " from peg " << source << " to peg " << destination << endl;
    towerOfHanoi(numDisks - 1, aux, destination, source);
}

int main() {
    int numDisks;
    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towerOfHanoi(numDisks, 'A', 'C', 'B'); // 'A' is the source peg, 'C' is the destination peg, 'B' is the auxiliary peg

    return 0;
}
