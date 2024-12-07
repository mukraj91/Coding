/*
Given a sorted array arr[] and an integer target, the task is to find the number of occurrences of target in given array.

Examples:

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: 2 occurs 4 times in the given array.

*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;



	 int count_number_of_occurence(vector<int> &arr, int target)
	 {
	 	unordered_map<int, int>freq;
	 	
	 	for(auto v: arr){
	 		freq[v]++;
		 }
		 
		 for(auto f : freq)
		 {
		 	if(f.first==target)
		 	{
		 		return f.second;
		 		break;
			}
		 }
}



int main()
{
	vector<int>arr{1,1,2,2,3,3,4,4,2,2,3,2, 3, 3, 3, 3, 3, 3};
	int target = 3;
	 int occurence = count_number_of_occurence(arr, target);
	 cout<<"Number of "<<target<<" occurences in array is: "<<occurence<<endl;
	 return 0;
}