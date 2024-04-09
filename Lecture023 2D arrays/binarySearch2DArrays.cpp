#include<iostream>
using namespace std;
bool binarySearchOn2DArrays(int arr[][4], int rowSize, int colSize, int target){
    int start = 0;
    int end = rowSize*colSize - 1;
    
    // int mid = start + (end - start)/2;

    while(start<=end){
        int mid = start + (end - start)/2;
        int element = arr[mid / colSize][mid % colSize];

        if(element == target){
            return 1;
        }
        else if(element < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        // mid = start + (end - start)/2;
    }
    return 0;
}
int main(){
    int arr[3][4];
    // taking input
    int rowSize;
    cout<<"Enter the Row Size: ";
    cin>>rowSize;

    int colSize;
    cout<<"Enter the Column Size: ";
    cin>>colSize;

    cout<<"Enter the number"<<endl;
    for(int row=0; row<rowSize; row++){
        for(int col=0; col<colSize; col++){
            cin>>arr[row][col];
        }
    }

    int target;
    cout<<"Enter the searching number: ";
    cin>>target;

    bool ans = binarySearchOn2DArrays(arr, rowSize, colSize, target);
    if(ans){
        cout<<"Number is present";
    }
    else{
        cout<<"Number is not present";
    }
}