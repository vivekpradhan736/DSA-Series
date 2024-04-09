#include<iostream>
using namespace std;

int main(){
    int arr[3][3];
    // taking input
    cout<<"Enter the number"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    //print datas
    cout<<"Here is your 2D array datas"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    int arr2[3][4] = {3,6,1,8,0,3,5,2,7,3,6,3};

    cout<<"printing the arr2 datas"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr2[row][col]<<" ";
        }
        cout<<endl;
    }

    int arr3[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};
    cout<<"printing the arr3 datas"<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout<<arr3[row][col]<<" ";
        }
        cout<<endl;
    }
}