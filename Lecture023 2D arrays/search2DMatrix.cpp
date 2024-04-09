#include<iostream>
using namespace std;
bool binarySearchOn2DArrays(int arr[][4], int rowSize, int colSize, int target){
    int rowIndex = 0;
    int colIndex = colSize - 1;

    while(rowIndex < rowSize && colIndex >= 0){
        int element = arr[rowIndex][colIndex];

        if(element == target){
            return 1;
        }
        else if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
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