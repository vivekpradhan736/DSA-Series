#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    for(; start<=end; ){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
    for(; start<=end; ){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[7] = {1, 2, 2, 2, 2, 2, 3};
    int size = 7;
    int key = 2;
    int first = firstOcc(arr, size, key);
    int last = lastOcc(arr, size, key);
    cout <<key<<" is present "<<last-first+1<<" times"<<endl;
}