#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start < end){
        int mid = start + (end-start)/2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int binarySearch(int arr[], int start, int end, int key){
    for(; start<=end; ){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return -1;
}
int main() {
    int arr[7] = {4,5,6,7,0,1,2};
    int key = 1;
    int size = 7;
    int pivot = getPivot(arr, size);
    if(key >= arr[pivot] && key <= arr[size-1]){
        return binarySearch(arr, pivot, size-1, key);
    }
    else{
        return binarySearch(arr, 0, pivot-1, key);
    }
}