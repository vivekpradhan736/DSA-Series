#include<iostream>
#include<vector>
using namespace std;

vector<int> wavePrint(int arr[][3], int rowSize, int colSize){
    vector<int> ans;
    for(int col=0; col<colSize; col++){
        if(col&1){
            // odd index --> Bottom to Top
            for(int row=rowSize-1; row>=0; row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            // even index --> Top to Bottom
            for(int row=0; row<rowSize; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}
int main(){
    int arr[3][3];
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
    vector<int> ans = wavePrint(arr, rowSize, colSize);
        for(int i=0; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
}