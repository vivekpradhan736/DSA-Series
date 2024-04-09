#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the 2D array row size: "<<endl;
    cin>>row;

    int col;
    cout<<"Enter the 2D array column size: "<<endl;
    cin>>col;

    // this is creating for row
    int** arr = new int*[row];

    //this is creating for column
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //your output
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
    }

    //releasing / deleting memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;
}