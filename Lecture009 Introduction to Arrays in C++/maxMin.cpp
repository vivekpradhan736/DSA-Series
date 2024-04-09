#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size){
    int min = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size;
    cout << "Enter the size of elements you want to store in the array";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements of the array";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout << " Maximum value is " << getMax(arr, size) << endl;

    cout << " Minimum value is " << getMin(arr, size) << endl;
}