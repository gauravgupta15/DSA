
#include <iostream>
using namespace std;

class MaxHeap {
    int* arr;
    int size;
    int total_size;
    public:
    MaxHeap(int n) {
        size = 0;
        total_size = n;
        arr = new int[n];
    }

    // insertation: 
    void insert(int ele) {
        if(size == total_size) {
            cout << "Heap Overflow";
            return;
        }
        arr[size] = ele;
        int index = size;
        size++;
        // correct position:
        while(index > 0 && arr[(index - 1)/2] < arr[index]) {
            swap(arr[(index-1)/2],arr[index]);
            index = (index - 1)/2;
        }

        cout << arr[index] << "  -> Inserted in the heap"<<endl;
    }
// Print the element of the heap:
    void print() {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i]<<" ";
        }
        cout << endl;
    }

    // Deletion in the heap:
    void deletion() {
        if(size == 0) {
            cout << "Heap Underflow";
            return;
        }
        cout << arr[0] << " deleted from the heap"<<endl;
        arr[0] = arr[size - 1];
        size--;

        if(size == 0) return;

        Heapify(0);
    }

    // Heapify Method:
    void Heapify(int index) {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        // Largest will strore the index of the element which is greater  b/w 
        // parent,left child, right child:

        if(left < size && arr[left] > arr[largest]) {
            largest = left;
        }
        if(right < size && arr[right] > arr[largest]) {
            largest = right;
        }

        if(largest != index) {
            swap(arr[index],arr[largest]);
            Heapify(largest);
        }
    }
};

int main() {
    MaxHeap mx(6);
    mx.insert(34);
    mx.insert(45);
    mx.insert(7);
    mx.insert(76);
    mx.insert(23);
    mx.print();

    mx.deletion();
    mx.print();
}