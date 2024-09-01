Closest Number
Difficulty: BasicAccuracy: 15.77%Submissions: 91K+Points: 1
Given  two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

 

Example 1:

Input:
N = 13 , M = 4
Output:
12
Explanation:
12 is the Closest Number to
13 which is divisible by 4.
Example 2:

Input:
N = -15 , M = 6
Output:
-18
Explanation:
-12 and -18 are both similarly close to
-15 and divisible by 6. but -18 has
the maximum absolute value.
So, Output is -18








SOLUTION  :






class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
       int Prev = N;
       int Next = N;
       while(true)
       {
           if(Prev%M==0) return Prev;
           if(Next%M==0) return Next;
           Prev--;
           Next++;
       }
    }
};