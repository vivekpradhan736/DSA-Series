#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(int arr[][4], int rowSize, int colSize){
    vector<int> ans;
    int total = rowSize*colSize;
    int count = 0;

    //index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = rowSize-1;
    int endingCol = colSize-1;

    while(count < total) {
        //print starting row
        for(int index = startingCol; count < total && index <= endingCol; index++){
            ans.push_back(arr[startingRow][index]);
            count++;
        }
        startingRow++;

        //print ending column
        for(int index = startingRow; count < total && index <= endingRow; index++){
            ans.push_back(arr[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int index = endingCol; count < total && index >= startingCol; index--){
            ans.push_back(arr[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting column
        for(int index = endingRow; count < total && index >= startingRow; index--){
            ans.push_back(arr[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
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
    vector<int> ans = spiralPrint(arr, rowSize, colSize);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}