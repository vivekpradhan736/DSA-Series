#include<iostream>
using namespace std;

int printFun(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"print"<<arr[i]<<" ";
    }

}
int main()
{
    // int number[10] = {2,5};
    // cout<<"value at index 0: "<<number[10]<<endl;
    // int n = 10;
    // for(int i=0; i<n; i++){
    //     cout<<number[i]<<" ";
    // }

    // printFun(number, n);

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    int n = sizeof(ch)/sizeof(char);
    cout<<"\nValue of n : "<<n<<endl;
}