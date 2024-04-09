#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    //create an array of count of characters
    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -1;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}
int main() {
    string s;
    cout<<"Enter the word ";
    cin>>s;
    char letter = getMaxOccCharacter(s);
    cout<<letter;
}