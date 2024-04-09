#include<iostream>
using namespace std;

void printArray(int str[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
}

int removeAllAdjacentDuplicates(int str[], int size){
    for(int i=0; i<size-1; i++){
        if(str[i] == str[i+1]){
            for(int j=i; j<(size-2); j++){
                str[j] = str[j+2];
            }
            i=0;
            size=size-2;
        }
    }
    printArray(str, size);
}
int main(){
    int str[10] = {1,1,5,6,1,1,6,5,0,9};
    cout<<"Enter the the string "<< endl;
    // cin>>str;
    int sizeOfString = 10;
    removeAllAdjacentDuplicates(str, sizeOfString);
}