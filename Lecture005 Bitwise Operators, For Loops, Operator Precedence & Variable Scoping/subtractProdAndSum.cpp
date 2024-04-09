#include<iostream>
using namespace std;

int main()
{
    int num = 234;
    int sum = 0;
    int prod = 1;

    while(num!=0){
        int rem = num%10;
        sum = sum + rem;
        prod = prod*rem;
        num = num / 10;
    }
    int answer = prod - sum;
    cout<<answer<<endl;
}