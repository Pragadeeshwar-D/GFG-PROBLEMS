Palindrome
Difficulty: SchoolAccuracy: 56.28%Submissions: 84K+Points: 0
Given an integer, check whether it is a palindrome or not.

Note : Strings which read the same backwards as forwards , eg - MADAM, MOM etc.

Example 1:

Input: n = 555
Output: Yes

Example 2:

Input: n = 123
Output: No
 

Your Task:
You don't need to read or print anything. Your task is to complete the function is_palindrome() which takes the number as input parameter and returns "Yes" if it is palindrome otherwise returns "No"(Without quotes).
 

Expected Time Complexity: O(x)
Expected Space Complexity: O(x) where x is number of digits in n.
 

Constraints:
1 <= n <= 1000





SOLUTION :



class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here.
		    string s = to_string(n);
		    string rs = s;
		    reverse(s.begin(),s.end());
		    if(s==rs)
		    {
		        return "Yes";
		    }
		    else
		    {
		        return "No";
		    }
		}
};