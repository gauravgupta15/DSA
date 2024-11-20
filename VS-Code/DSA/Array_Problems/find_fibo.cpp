#include <iostream>
using namespace std;

void find_fibo(int n) {
    if (n == 0)
        cout << n << " ";

    int a = 0;
    int b = 1;
    int c = 1;  // Initialize c to 1

    while (c <= n) {
        if (c == n) {
            cout << n << " ";
            return;
        }

        // Calculate the next Fibonacci number
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int arr[100];
    int n;

    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Fibonacci numbers in the array: ";
    for (int i = 0; i < n; i++) {
        find_fibo(arr[i]);
    }

    return 0;
}
