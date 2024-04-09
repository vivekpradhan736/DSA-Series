#include<iostream>
using namespace std;
 int main(){
    int arr[10] = {2,5,6,13};

    cout<<"address of first memory block is "<< arr << endl; 
    cout << arr[0] << endl;
    cout<<"address of first memory block is "<< &arr[0] << endl;

    cout <<"*arr = " << *arr << endl;
    cout <<"*arr + 1 = " << *arr + 1 << endl;
    cout <<"*(arr + 1) = " << *(arr + 1) << endl;
    cout <<"*(arr) + 1 = " << *(arr) + 1 << endl;
    cout <<"arr[2] = " << arr[2] << endl;
    cout <<"*(arr + 2) = " << *(arr + 2) << endl;

//  formula
//   _______________________
//  | arr[i] = *(arr + i)  |
//  _______________________
// <--- or --->
//   _______________________
//  | i[arr] = *(i + arr)  |
//  _______________________

    int i = 3;
    cout <<"i[arr] = " << i[arr] << endl;

// size of array and pointer
   int temp[10] = {1,2};
   cout <<"size of array are: " << sizeof(temp) << endl;
   cout <<"size of array first index value: " << sizeof(*temp) << endl;
   cout <<"size of array first index address: " << sizeof(&temp) << endl;

   int *tempPtr = &temp[0];
   cout <<"size of pointer are: "<< sizeof(tempPtr) << endl;
   cout <<"size of pointer first index: "<< sizeof(*tempPtr) << endl;
   cout <<"size of pointer address are: "<< sizeof(&tempPtr) << endl;

// address --->
   int a[20] = {1,2,3,4};
   cout<< "&a[0]: " << &a[0] << endl;
   cout<< "&a: " << &a << endl;
   cout<< "a: " << a << endl;

   int *p = &a[0];
   cout << "p: " << p <<endl;
   cout << "*p: " << *p <<endl;
   cout << "&p: " << &p <<endl;

// address cannot be change in array as well as pointer
   int array[10];
// ERROR
   //array = array + 1;

   int *point = &array[0];
   cout << point << endl;
   point = point + 1;
   cout << point << endl;
 }