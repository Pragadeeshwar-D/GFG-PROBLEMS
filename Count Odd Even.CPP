Count Odd Even
Difficulty: BasicAccuracy: 37.44%Submissions: 100K+Points: 1
Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

Note: Return an array of two elements where the first one in the count of odd & second one is the count of even.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: 3 2
Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).
Input: arr[] = [1, 1]
Output: 2 0
Explanation: There are 3 odd elements (1, 1) and no even elements.




SOLUTION :


class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    vector<int> countOddEven(vector<int> &arr) {
        // your code here
        vector<int>s;
        int o = 0,e=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]%2==0)
            {
                e++;
            }
            else
            {
                o++;
            }
        }
        s.push_back(o);
        s.push_back(e);
        return s;
    }
};