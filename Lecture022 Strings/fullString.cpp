#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    cout<<"Enter the full name "<<endl;
    cin>>name;
    getline(cin, name);
    cout<<name;
    int len = name.length();
    cout<<len;
}