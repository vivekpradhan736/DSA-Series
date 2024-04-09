#include<iostream>
using namespace std;

bool linearSearch(int arr[][3], int num){
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            if(arr[row][col] == num){
                return true;
            }
        }
    }
        return false;
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

    int num;
    cout<<"Enter the searching number: ";
    cin>>num;

    bool ans = linearSearch(arr,num);
    if(ans){
        cout<<"Number is present";
    }
    else{
        cout<<"Number is not present";
    }
}