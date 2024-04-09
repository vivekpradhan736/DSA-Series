#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a array size: "<<endl;
    cin>>n;

    int* arr = new int[n];

    // taking inputs in array
    cout<<"Enter the "<<n<<" "<<"data's"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int total = getSum(arr, n);
    cout<<"Total sum is: "<<total<<endl;
    
    cout<<"This is your data's "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}