#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }
    
    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> next(n);
        next = nextSmallerElement(heights, n);
        for(int i = 0; i < n; i++) {
            cout << next[i] << " ";
        }
        cout << endl;
            
        vector<int> prev(n);
        prev = prevSmallerElement(heights, n);
        for(int i = 0; i < n; i++) {
            cout << prev[i] << " ";
        }
        cout << endl;
        
        int area = INT_MIN;
        for(int i = 0; i < n; i++) {
            int l = heights[i];
            
            if(next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }
};

int main() {
    Solution solution;
    vector<int> heights = {4, 2, 1, 5, 6, 2, 3};
    int maxArea = solution.largestRectangleArea(heights);
    cout << "Largest Rectangle Area: " << maxArea << endl;
    return 0;
}


// #include<iostream>
// #include<stack> 
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int arr[7];
//     cout<<"Enter the heights of the array: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     stack<int> s;
//     int maxArea = 0;
//     int i = 0;
//     while(i < n) {
//         if(s.empty() || arr[s.top()] <= arr[i]) {
//             s.push(i);
//             i++;
//         } else {
//             int tp = s.top();
//             s.pop();
//             int area = arr[tp] * (s.empty() ? i : i - s.top() - 1);
//             maxArea = max(maxArea, area);
//         }
//     }
//     while(!s.empty()) {
//         int tp = s.top();
//         s.pop();
//         int area = arr[tp] * (s.empty() ? i : i - s.top() - 1);
//         maxArea = max(maxArea, area);
//     }
//     cout << maxArea << endl;
//     return 0;
// }