#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int key;
    cout <<" Enter the element to search for " << endl;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is not present";
    }

    return 0;
}