#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    return start;
}
int main() {
    int arr[7] = {4,5,6,-2,0,1,2};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}