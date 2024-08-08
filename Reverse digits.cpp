Reverse digits
Difficulty: SchoolAccuracy: 46.92%Submissions: 85K+Points: 0
You are given an integer N, reverse the digits of given number N, ensuring that the reversed number has no leading zeroes. Return the resulting reversed number.

Example 1:

Input: 200
Output: 2
Explanation: By reversing the digits of 
number, number will change into 2.
Example 2:

Input : 122
Output: 221
Explanation: By reversing the digits of 
number, number will change into 221.


Your Task:
You don't need to read or print anything. Your task is to complete the function reverse_digit() which takes N as input parameter and returns the reversed number.
 

Expected Time Complexity: O(Log(N))
Expected Space Complexity: O(1)
 

Constraints:
1 <= N <= 1015






SOLUTION :


class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long rev;
		    long rem;
		    while(n>0)
		    {
		        rem = n%10;
		        n/=10;
		        rev = rev*10 + rem;
		    }
		    return rev;
		}
};