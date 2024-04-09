#include<iostream>
using namespace std;

int arraySum(int arr[], int size){
    int total = 0;
    //base case
    if(size == 0)
    return 1;
    
    // total = total + arr[0];

    int sum = total + arraySum(arr + 1, size - 1);
    total = sum;
      return sum;
}
int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int arr[10] = {1,3,5,7,9,11,13,15,17,19};

    int ans = arraySum(arr, size);
    cout<<"Ans: "<<ans;
}