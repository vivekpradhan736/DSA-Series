#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int compress(char word[]){
    int i = 0;
	for(int j = 1, count = 1; j <= strlen(word); j++, count++) {
		if(j == strlen(word) || word[j] != word[j - 1]) {
			word[i++] = word[j - 1];  
			if(count >= 2) 
				for(char digit : to_string(count)) 
					word[i++] = digit;
			count = 0;
		}
	}
	return i;
}
string stringCompression(string &input){
    string str = "";
    for(int i = 0; i <= input.length() - 2; i++){
        int count = 1;
        for(int j = i; j < input.length() && input[j] == input[j+1]; j++){
            count++;
            i++;
        }
        str.push_back(input[i]);
        str.push_back(count + '0');
    }
    return str;
}
int main(){
    char word[6];
    cout<<"Enter a word"<<endl;
    cin>>word;
    cout<<"Now your word length is: "<<compress(word)<<endl;
    string input;
    cout<<"Enter a string"<<endl;
    cin>>input;
    cout<<"Ans: "<<stringCompression(input)<<endl;
}