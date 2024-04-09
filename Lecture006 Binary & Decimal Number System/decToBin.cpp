#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter a number";
    // cin>>n;
    // int ans = 0;
    // int i = 0;
    // while(n != 0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n >> 1;
    //     i++;
    // }
    // cout<<"Answer is "<< ans << endl;

    long long int n;
    cout<<"Enter a number";
    cin>>n;
    unsigned long long int i = 0, ans = 0;
    if(n < 0) {
        n = pow(2, 16) + n;
    }
    cout<< n << endl;
    while(n){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
        cout<< ans << endl;
    }
    cout<<ans<< endl;
}