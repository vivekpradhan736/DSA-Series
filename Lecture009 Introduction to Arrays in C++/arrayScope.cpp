#include<iostream>
using namespace std;

void update(int arr[], int size){

    cout << endl << "Inside the function" <<endl;

    //updating array's first element
    arr[0] = 120;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout << "Going back to main function" << endl;
}
int main()
{
    int arr[5] = {1,2,3,4,5};

    update(arr,5);

    cout<< endl << "Printing in main function" << endl;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     return 0;
}