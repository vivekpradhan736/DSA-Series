#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1)
    return true;
    
    if(arr[0] > arr[1])
      return false;
    else {
      bool remainingPart = isSorted(arr + 1, size - 1);
      return remainingPart;
    }
}
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[10] = {1,3,5,7,9,11,13,15,17,19};

    bool ans = isSorted(arr, size);
    if(ans){
        cout<<"Array is sorted "<< endl;
    }
    else{
        cout<<"Array is not sorted "<< endl;
    }
}