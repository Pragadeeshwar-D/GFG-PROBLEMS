Immediate Smaller Element
Difficulty: BasicAccuracy: 36.26%Submissions: 173K+Points: 1
Given an integer array arr of size n. For each element in the array, check whether the right adjacent element (on the next immediate position) of the array is smaller. If next element is smaller, update the current index to that element. If not, then  -1.

Note : You need to make changes in the array itself.

Examples:

Input: n = 5, arr[] = {4, 2, 1, 5, 3}
Output: 2 1 -1 3 -1
Explanation: Array elements are 4, 2, 1, 5, 3. Next to 4 is 2 which is smaller, so we print 2. Next of 2 is 1 which is smaller,so we print 1. Next of 1 is 5 which is greater, so we print -1. Next of 5 is 3 which is smaller, so we print 3.  Note that for last element, output is always  going to be -1 because there is no element on right.
Input: n = 6, arr[] = {5, 6, 2, 3, 1, 7}
Output: -1 2 -1 1 -1 -1
Explanation: Next to 5 is 6 which is greater, so we print -1. Next of 6 is 2 which is smaller, so we print 2. Next of 2 is 3 which is greater, so we print -1. Next of 3 is 1 which is smaller, so we print 1. Next of 1 is 7 which is greater, so we print -1. Note that for last element, output is always going to be -1 because there is no element on right.
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)





SOLUTION :


class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    //  code here
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i+1]<arr[i])
	        {
	            a[i] = arr[i+1];
	        }
	        else
	        {
	            a[i] = -1;
	        }
	        
	    }
	    a[n-1] = -1;   
	    for(int i=0;i<n;i++)
	    {
	       arr[i] = a[i];
	       
	    }
	    
	    
	    
	}

};