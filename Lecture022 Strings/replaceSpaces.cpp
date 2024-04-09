#include<iostream>
#include<string>
using namespace std;

int main(){
    string word;
    cout<<"Enter the sentence"<<endl;
    cin>>word;
    string temp = "";
    for(int i=0; i<word.length(); i++){
        if(word[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(word[i]);
        }
    }
    cout<<"This is temp word"<<temp;
}