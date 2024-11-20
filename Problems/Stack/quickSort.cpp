
#include <iostream>
using namespace std;
// Function to swap two elements
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to partition the array around a pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = (low - 1);  // Index of the smaller element

    // Rearrange elements around the pivot
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  // Place pivot at the right position
    return (i + 1);  // Return the partitioning index
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partitioning index

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int passengerNumbers[] = {35, 12, 87, 23, 61};
    int n = sizeof(passengerNumbers) / sizeof(passengerNumbers[0]);

    cout << "Unsorted passenger numbers:\n";
    for (int i = 0; i < n; i++) {
        cout << passengerNumbers[i] << " ";
    }

    quickSort(passengerNumbers, 0, n - 1);  // Sort the array

    cout << "\nSorted boarding sequence:\n";
    for (int i = 0; i < n; i++) {
        cout << passengerNumbers[i] << " ";
    }

    return 0;
}
