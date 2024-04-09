#include<iostream>
using namespace std;

//This is called Global Variable.
// ---->> But Global Variable is bad practice for coding. <<----
int score = 15;

void a(int& i){
    cout<< score <<" in a"<<endl;
    score++;
    char ch = 'a';
    cout<< i << endl;
}

void b(int& i){
    cout << score << " in b" << endl;
    cout << i << endl;
}

int main(){
    cout << score << " in main"<< endl;
    int i = 5;
    a(i);
    b(i);

    return 0;
}