#include<iostream>
using namespace std;

int main(){
    int num = 5;
    cout <<"num = "<<num <<endl;

    // address of Operator => &
    cout <<"address of num is "<< &num << endl;

    int *ptr = &num;
    cout<< "ptr value is: "<< *ptr << endl;
    //                      /     \
    //                    /        \
    //                  /           \
    // (with * print value)    (without * ptint only address)

    cout <<"Address is: "<< ptr << endl;

    double d = 4.35;
    double *p2 = &d;

    cout<< "Address is: "<< p2 << endl;
    cout << "value is: "<< *p2 << endl;

    // size of pointer is 
    cout<<"size of integer is "<< sizeof(num) << endl;
    cout<<"size of pointer is "<< sizeof(ptr) << endl;
}