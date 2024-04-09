#include<iostream>
using namespace std;

int fibonacci(int a, int b, int n, int count){

    if(n < count){
        cout<< a+b <<" ";
        fibonacci(b, a+b, n+1, count);
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Fibonacci Series: ";
    int a = 0;
    int b = 1;
    fibonacci(a,b,1,n);
}