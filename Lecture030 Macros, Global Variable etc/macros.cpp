#include<iostream>
using namespace std;

//This is called macros.
#define pi 3.14

int main(){
    // Area of circle
    int r;
    cout<<"Enter the radius: "<<endl;
    cin>>r;

    double area = pi * r * r;
    cout<<"Area of circle is: "<<area<<endl;
}