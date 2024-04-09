#include<iostream>
using namespace std;

// with swap() methhod :-----------
void selectionSortBySwap(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swapping the elements.
        swap(arr[i], arr[minIndex]);
    }
}

// without swap() methhod :-----------
void selectionSortWithoutSwap(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIndex = i;
        int minValue = arr[i];
        int tempValue = arr[i];
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swapping the elements.
        arr[i] = arr[minIndex];
        arr[minIndex] = tempValue;
    }
}
int main() {
    int arr[6] = {5, 4, 3, 2, 1, 0};
    int n = 6;
    selectionSortBySwap(arr, n);
    
    // selectionSortWithoutSwap(arr, n);

    cout << "Array after sorting is " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}