Sum of Series
Difficulty: SchoolAccuracy: 23.81%Submissions: 388K+Points: 0
Write a program to find the sum of the given series 1+2+3+ . . . . . . (n terms) 

Examples:

Input: n = 1
Output: 1
Explanation: For n = 1, the sum will be 1.
Input: n = 5
Output: 15
Explanation: For n = 5, sum will be 15. 1 + 2 + 3 + 4 + 5 = 15.
Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= n <= 109



SOLUTION :


class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        return (long long)n*(n+1)/2;
    }
};