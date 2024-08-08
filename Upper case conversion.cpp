Upper case conversion
Difficulty: SchoolAccuracy: 38.13%Submissions: 43K+Points: 0
Given a string str, convert the first letter of each word in the string to uppercase. 

Example 1:

Input:
str = "i love programming"
Output: "I Love Programming"
Explanation:
'I', 'L', 'P' are the first letters of 
the three words.

Your Task:  
You dont need to read input or print anything. Complete the function transform() which takes s as input parameter and returns the transformed string.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N) to store resultant string  


Constraints:
1 <= N <= 104
The original string str only consists of lowercase alphabets and spaces to separate words.

 


SOLUTION : 


string transform(string s)
{
    // code here
    for(int i=0;i<s.size();i++)
    {
        if(i==0)
        {
            s[i] = toupper(s[i]);
        }
        else if(s[i] == ' ')
        {
            s[i+1] =  toupper(s[i+1]);
        }
    }
    return s;
}