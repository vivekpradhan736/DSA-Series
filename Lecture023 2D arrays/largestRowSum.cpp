#include<iostream>
using namespace std;

int largestRowSum(int arr[][3]){
    int maxi = -1;
    int rowIndex ;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col=0; col<3; col++){
            sum = sum + arr[row][col];
        }
            cout<<sum<<" "<<endl;
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"In "<<rowIndex<<" "<<"row maximum sum "<<maxi<<" "<<"is found "<<endl;
    return maxi;
}
int main(){
    int arr[3][3];
    // taking input
    cout<<"Enter the number"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    int ans = largestRowSum(arr);
}