#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    for(;start <= end; ){
        cout<<"value of start"<<start<<endl;
        cout<<"value of end"<<end<<endl;
        int mid = (start+end)/2;
    
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
}
int main(){
    int even[10] = {2,4,6,8,12,18,20,22,23,25};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 10, 23);

    cout << " Index of 6 is " << evenIndex<<endl;
}