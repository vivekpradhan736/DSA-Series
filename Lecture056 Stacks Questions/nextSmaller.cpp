#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main()
{
    int arr[4];
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }
    stack<int> s;
    s.push(-1);
    int ans[4];
    
    for(int i=n-1; i>=0 ; i--) {
        int curr = arr[i];
        while(s.top() >= curr)
        {
            s.pop();
        }
        //ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    cout<<"Next Smaller Element: ";
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    cout<<"Now stack data is: ";
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}