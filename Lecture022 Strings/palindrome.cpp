#include<iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch >= 'a' && ch <= 'z')
        return ch;
    else
        return ch + 32;
}
int getLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

bool checkPalindrome(char word[], int length){
    int start = 0;
    int end = length-1;
    for(; start<end; ){
        if(word[start] == word[end]){
            start++;
            end--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int main() {
    char word[20];
    cout<<"Enter the word "<<endl;
    cin>>word;
    int length = getLength(word);
    // Converting all characters of string into lower case.
    for(int i = 0; i<length; i++){
        word[i] = toLowerCase(word[i]);
    }
    int isPalindrome = checkPalindrome(word, length);
    if (isPalindrome){
        cout<<"The word is a palindrome";
    }
    else{
        cout<<"The word is not a palindrome";
    }
}