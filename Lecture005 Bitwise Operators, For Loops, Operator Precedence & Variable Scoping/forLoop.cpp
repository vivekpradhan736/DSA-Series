#include<iostream>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter a number";
    // cin>>n;

    // cout<<"printing count from 1 to "<<n << endl;
    // for(int i=1; i<=n; i++){
    //     cout<<i<<endl;
    // }

    int num;
    cout<<"Enter a number";
    cin>>num;

    cout<<"total sum of 1 to "<<num << endl;
    int sum = 0;
    int j = 1;
    for(; ; ){
        if(j<=num){
            sum = sum + j;
        }
        else{
            cout<<sum<<endl;
            break;
        }
        j++;
    }

    for(int a = 0 , b =1, c = 2; a>=0 && b>=1 && c>=2; a--,b--, c-- ){
       cout<<a <<" "<< b << " "<<c << endl;
   }
   return 0;
}