#include<iostream>
using namespace std;

int main(){
    int i = 5;
    cout <<"i = "<<i <<endl;
    cout <<"&i = "<<&i << endl;

//  Type .1) to initialisation pointer
    int *p = &i;
    cout <<"p = "<<p <<endl;
    cout <<"*p = "<<*p << endl;

//  Type .2) to initialisation pointer
    int *q = 0;
    q = &i;
    cout <<"q = "<<q <<endl;
    cout <<"*q = "<<*q << endl;

    cout <<"before i = "<<i <<endl;
    (*p)++;
    cout <<"after i = "<<i <<endl;

// one pointer is point to another pointer
   int num = 18;
   int *ptr1 = &num;
   int *ptr2 = ptr1;
   cout << ptr1 <<" - " << ptr2 << endl;
   cout << *ptr1 <<" - " << *ptr2 << endl;

// Pointer in Arithmetic concept
   int n = 3;
   int *t = &n;
   cout << "before *t: " << *t << endl;
   *t = *t + 1;
   cout << "after *t: " << *t << endl;
   cout << "before t: " << t << endl;
   t = t + 1;
   cout << "after t: " << t << endl;

   float f = 10.5;
   float k = 2.5;
   float *ptr = &f;
   (*ptr)++;
   *ptr = k;
   cout<<"*ptr"<<*ptr<<endl;
   cout<<"f"<<f<<endl;
   cout<<"k"<<k<<endl;

   char ch = 'a';
   char *pt = &ch;
   ch++;
   cout<<"*pt " <<*pt << endl;
}