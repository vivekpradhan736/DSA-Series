#include<iostream>
using namespace std;

int insertionSort(int arr[], int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(){
    int arr[6] = {5, 4, 3, 2, 1, 0};
    int n = 6;
    insertionSort(arr, n);
    cout << "Array after sorting is " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}