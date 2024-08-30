Rotating an Array
Difficulty: BasicAccuracy: 44.48%Submissions: 111K+Points: 1
Given an array arr[]. The task is to rotate the array by d elements where d ≤ arr.size.

Examples:

Input: arr[] = [-1, -2, -3, 4, 5, 6, 7], d = 2
Output: [-3, 4, 5, 6, 7, -1, -2]
Explanation: 
Rotate by 1: [-2, -3, 4, 5, 6, 7, -1]
Rotate by 2: [-3, 4, 5, 6, 7, -1, -2]
Input: arr[] = [1, 3, 4, 2], d = 3 
Output: [2, 1, 3, 4]
Explanation: After rotating the array three times, the first three elements shift one by one to the right.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size ≤ 106
-109 ≤ arr[i] ≤ 109
0 ≤ d ≤ arr.size




SOLUTION :









class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
        vector<int>v;
        int n = arr.size();
        int temp[n];
        for(int i=0;i<n;i++)
        {
            temp[i] = arr[i];
        }
        for(int i=0;i<n-d;i++)
        {
            v.push_back(arr[i+d]);
        }
        for(int i=n-d;i<n;i++)
        {
            v.push_back(temp[i-n+d]);
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i] = v[i];
        }
        
    }
};