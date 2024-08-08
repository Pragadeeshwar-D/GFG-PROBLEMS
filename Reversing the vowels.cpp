Reversing the vowels
Difficulty: SchoolAccuracy: 40.16%Submissions: 45K+Points: 0
Given a string consisting of lowercase english alphabets, reverse only the vowels present in it and print the resulting string.

Example 1:

Input:
S = "geeksforgeeks"
Output: geeksforgeeks
Explanation: The vowels are: e, e, o, e, e
Reverse of these is also e, e, o, e, e.

Example 2:

Input: 
S = "practice"
Output: prectica
Explanation: The vowels are a, i, e
Reverse of these is e, i, a.
 

Example 3:

Input: 
S = "bcdfg"
Output: bcdfg
Explanation: There are no vowels in S.

Your Task:
You don't need to read input or print anything. Your task is to complete the function modify() which takes the string S as input and returns the resultant string by reversing only the vowels present in S.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(|S|).


Constraints:
1<=|S|<=105

 



SOLUTION : 


class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            int i = 0;
            int j = s.size()-1;
            while(i<j)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    {
                        swap(s[i],s[j]);
                        i++;
                        j--;
                        
                    }
                    else{
                    j--;}
                    
                }
                else
                {
                    i++;
                }
            }
            return s;
        }
};

