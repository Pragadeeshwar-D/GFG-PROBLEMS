Find the median
Difficulty: BasicAccuracy: 44.57%Submissions: 129K+Points: 1
Given an array arr[] of N integers, calculate the median.

NOTE: Return the floor value of the median.
 

Example 1:

Input: N = 5
arr[] = 90 100 78 89 67
Output: 89
Explanation: After sorting the array 
middle element is the median 

Example 2:

Input: N = 4
arr[] = 56 67 30 79
Output: 61
Explanation: In case of even number of 
elements, average of two middle elements 
is the median.










SOLUTION :

Class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    int n = v.size();
		    if(n%2==1)
		    {
		        return(v[(n/2)]);
		    }
		    else
		    {
		        return((v[(n/2)-1]+v[(n/2)])/2);
		    }
		}
};