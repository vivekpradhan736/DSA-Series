#include<iostream>
using namespace std;

int main()
{
    // while loop
    // int i = 1;
    // while(i<=10){
    //     cout<<i<<endl;
    //     i++;
    // }

    // for loop
    // int n;
    // cout<<"Enter a number";
    // cin>>n;
    // int sum = 0;
    // for(int j=1; j<=n; j++){
    //     sum = sum + j;
    // }
    // cout<<sum<<endl;

    // Homework
    // 1. Write a program to find sum of all even numbers from 1 to n

    // int num;
    // cout<<"Enter a number";
    // cin>>num;
    // int sum_even = 0;
    // for(int k=1; k<=num; k++){
    //     if(k%2==0){
    //         sum_even = sum_even + k;
    //     }
    // }
    // cout<<sum_even<<endl;

    // 2. Write a program to find a number is prime or not

    // int num;
    // cout<<"Enter a number";
    // cin>>num;
    // bool flag = true;
    // if (num <= 1) {
    //     flag = false;
    // } else {
    //     for (int i = 2; i < num; i++) {
    //         if (num % i == 0) {
    //             flag = false;
    //             break;
    //         }
    //     }
    // }
    // if (flag == true) {
    //     cout << "Prime" << endl;
    // } else {
    //     cout << "Not Prime" << endl;
    // }

    // pattern
    // print * * * *
    //       * * * *
    //       * * * *

    // int n;
    // cout << "Enter the size of square";
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // print 1 1 1
    //       2 2 2
    //       3 3 3

    int n;
    cout << "Enter the size of square";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<i;
        }
        cout<<endl;
    }
}