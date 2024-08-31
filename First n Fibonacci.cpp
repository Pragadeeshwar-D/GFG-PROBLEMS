First n Fibonacci
Difficulty: BasicAccuracy: 29.92%Submissions: 236K+Points: 1
Given a number N, find the first N Fibonacci numbers. The first two number of the series are 1 and 1.

Example 1:

Input:
N = 5
Output: 1 1 2 3 5
Example 2:

Input:
N = 7
Output: 1 1 2 3 5 8 13




SOLUTION :


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long>s;
        long long a = 1,b=1,c=0;
        for(int i=0;i<n;i++)
        {
            s.push_back(a);
            a = b+c;
            c = b;
            b = a;
        }
        return s;
        
    }
};