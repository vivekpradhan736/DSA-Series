#include<iostream>
using namespace std;

int peakInMountain(int arr[], int size){
    int start = 0;
    int end = size - 1;

    for(; start<=end; ){
        int mid = start + (end-start)/2;
        if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
            return mid;
        }
        else if(arr[mid] > arr[mid+1]){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}
int main() {
    int arr[7] = {1, 3, 14, 9, 8, 2, 0};
    int size = 7;

    int peakElement = peakInMountain(arr, size);
    cout << "Peak Element is at index " << peakElement << endl;
}