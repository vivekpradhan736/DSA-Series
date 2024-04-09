#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

void reverse(char name[], int n){
    int start = 0;
    int end = n-1;
    for(; start<end; ){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main() {
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Your name is ";
    cout<<name<<endl;

    int length = getLength(name);
    cout<<"Length of your name: "<<length<<endl;

    reverse(name, length);
    cout<<"Your reverse name is "<<name;
}