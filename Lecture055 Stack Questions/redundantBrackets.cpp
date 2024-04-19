#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    string str = "(a+b)";
    
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ')') {
            if(s.top() == "(") {
                cout << "Redundant Brackets Present" << endl;
                return 0;
            }
            else {
                while(s.top() != "(") {
                    s.pop();
                }
                s.pop();
            }
        }
        else {
            s.push(string(1, str[i]));
        }
    }
  
    // If all the brackets are valid then print that there is no redundant bracket present
    if(s.empty()) {
        cout << "No Redundant Brackets Present" << endl;
    }


    return 0;
}