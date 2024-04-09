#include<iostream>
using namespace std;

int main(){

    cout<<"Hello World" << endl;

    int a = 10;
    cout<<a<<endl;

    float b = 10.5;
    cout<<b<<endl;
    
    //type casting - converting one data type to another
    //syntax: (datatype)variable
    int c = (int)b;
    cout<<c<<endl;

    char d = 'A';
    cout<<d<<endl;

    string e = "Vivek";
    cout<<e<<endl;

    bool f = true;
    cout<<f<<endl;

    float g = 10.5;
    cout<<g<<endl;

    double h = 10.59;
    cout<<h<<endl;

    int size = sizeof(a);
    cout<<"Size of a is = " << size << endl;

    // operators

    int i = 10.5/5;
    cout<<i<<endl;
    cout<<10.5/5<<endl;

    double j = 12.5/3;
    cout<<j<<endl;

    int num1 = 2;
    int num2 = 3;
    bool check = (a==b);
    cout<<check<<endl;
    
    return 0;
}