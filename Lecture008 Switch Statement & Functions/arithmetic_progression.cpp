#include<iostream>
using namespace std;

int ap(int n){
    int ans = 3 * n + 7;
    return ans;
}
int main()
{
    int n;
    cin>>n;

    int AP = ap(n);
    cout<<"Sum of Arithmetic Progression is "<<AP<<endl;
}