#include<iostream>
using namespace std;

bool isSame(int freq1[], int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i])
        return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
    int m = s1.size();
    int n = s2.size();
    int freq1[26] = {0};
    int freq2[26] = {0};

    if(m > n){
        return false;
    }

    for(int i=0; i<m; i++){
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    if(isSame(freq1, freq2)){
        return true;
    }

    for(int i=m; i<n; i++){
        freq2[s2[i-m] - 'a']--;
        freq2[s2[i] - 'a']++;
        if(isSame(freq1, freq2)){
            return true;
        }
    }
    return false;
}
int main(){
    string s1;
    cout<<"Enter the first word"<<endl;
    cin>>s1;

    string s2;
    cout<<"Enter the second word"<<endl;
    cin>>s2;

    cout<<"Answer is "<<checkInclusion(s1, s2);
}