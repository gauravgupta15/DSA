#include <iostream>
#include <vector>
using namespace std;

vector<int> ThreeSum(int *arr, int n, int k, int i) {
    vector<int> a;

    // Print the parameters of the current recursion call
    cout << "Recursion call: n=" << n << ", k=" << k << ", i=" << i << endl;

    // Check if there are enough elements remaining in the array
    if (i + k > n) {
        cout << "Stopping recursion: Not enough elements remaining in the array." << endl;
        return a;
    }
    
    int sum = 0;
    // Calculate sum of k consecutive elements starting from index i
    for (int j = i; j < i + k; j++) {
        sum += arr[j];
    }

    // Store the sum in the vector
    a.push_back(sum);

    // Recursively calculate sums for next consecutive groups
    vector<int> next_sums = ThreeSum(arr, n, k, i + 1);
    a.insert(a.end(), next_sums.begin(), next_sums.end());

    return a;
}

int main() {
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int i = 0;
    
    vector<int> sums = ThreeSum(arr, n, k, i);
    
    cout << "Sums of consecutive " << k << " elements:" << endl;
    for (int sum : sums) {
        cout << sum << " ";
    }
    cout << endl;

    return 0;
}
