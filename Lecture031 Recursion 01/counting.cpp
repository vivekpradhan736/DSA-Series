#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n == 0){
        return ;
    }

    //Recursive relation
    print(n - 1);
    cout<< n<<" ";
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<endl;
    print(n);
}