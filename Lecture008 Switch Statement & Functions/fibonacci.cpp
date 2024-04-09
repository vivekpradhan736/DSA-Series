#include<iostream>
using namespace std;

int fibonacci(int n, int a, int b){
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++){
        int nextNum = a+b;
        cout<<nextNum <<" ";
        a = b;
        b = nextNum;
    }
}
int main() {
    int n;
    cin>>n;
    int a = 0;
    int b = 1;
    fibonacci(n, a, b);
}