Reverse array in groups
Difficulty: BasicAccuracy: 37.48%Submissions: 328K+Points: 1
Given an array arr of positive integers. Reverse every sub-array group of size k.

Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.

Examples:

Input: k = 3, arr= [1, 2, 3, 4, 5]
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.
Input: k = 5, arr = [5, 6, 8, 9]
Output: [9, 8, 6, 5]
Explnation: Since k is greater than array size, the entire array is reversed.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size(), k ≤ 107
1 ≤ arr[i] ≤ 1018




SOLUTION :



class Solution {
  public:
    void reverseInGroups(vector<long long int> &arr, int k) {
        // code here
        int n = arr.size();
        for(int i=0; i<n; i+=k){
            
            int grpEnd = min(i + k, n);
            reverse(arr, i, grpEnd-1);
    }
    }
    void reverse(vector<long long int>&arr,int start,int end)
    {
        while(start<end)
        {
            swap(arr[start++],arr[end--]);
        }
    }
};