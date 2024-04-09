#include<iostream>
using namespace std;

int main() {

    // for(int i=0; i<5; i++) {

    //     cout<< " HI " << endl;
    //     cout<< " Hey " << endl;
    //     continue;

    //     cout<< "Reply toh karde " <<endl;
    // }
    int i;
    for( i=0; i<=15; i+=2){
        cout<< i << " ";
        if( i&1){
            continue;
        }
        i++;
    }
    return 0;
}