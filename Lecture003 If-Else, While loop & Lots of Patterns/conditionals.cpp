#include <iostream>
using namespace std;

int main()
{
    //    int a ;
    //    cout<<" enter the value of a "<<endl;
    //    cin>>a;

    //    if(a>0) {
    //        cout<<" A is positive"<< endl;
    //    }
    //    else if(a<0) {
    //        cout<<" A is negative"<<endl;
    //    }
    //    else {
    //        cout<<" A is 0"<<endl;
    //    }

    // int a, b;

    // cout << "Enter the value of a " << endl;
    // cin >> a;
    // cout << "Enter the value of b " << endl;
    // cin >> b;

    // if (a > b)
    // {
    //     cout << " A is greater " << endl;
    // }
    // if (b > a)
    // {
    //     cout << " B is greater " << endl;
    // }

    // int c;
    // c = cin.get();
    // cout << " value of c is : " << c << endl;

//     int a = 2;
//     int b = a+1;

// cout << "value of a: " << a << endl;
//     if((a=5)==b){
//         cout<<"If ans"<<a <<b;
//     }
//     else{
//         cout<<"else ans"<<a+1;
//         }

//         cout<<"new"<<a<<b;

char a;
cin >> a;

if(a>= 'A' && a<='Z'){
    cout<<"Uppercase"<<endl;
}
else if(a>='a' && a<='z'){
    cout<<"Lowercase"<<endl;
}
else{
    cout<<"Invalid"<<endl;
}

    return 0;
}
