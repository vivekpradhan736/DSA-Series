#include<iostream>
using namespace std;

void passByValue(int n){
    n++;
}

void passByRefe(int& n){
    n++;
}

int main(){
    int i = 5;

    //create a ref variable
    int &j = i;

    cout<< i << endl;
    cout<< j << endl;
    i++;
    cout<< i << endl;
    cout<< j << endl;
    j++;
    cout<< i << endl;
    cout<< j << endl;

    int num1 = 5;
    cout<<"passByValue Before: "<<num1 << endl;
    passByValue(num1);
    cout<<"passByValue After: "<<num1 << endl;

    int num2 = 18;
    cout<<"passByRefe Before: "<<num2 << endl;
    passByRefe(num2);
    cout<<"passByRefe After: "<<num2 << endl;
}