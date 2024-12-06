/* Find the second largest element of the array*/

#include<iostream>
#include<vector>
#include <algorithm>    // std::sort

using namespace std;




// Approach 1 - O(nlogn) -> Time Comlexity 

int second_largest_elm(vector<int> &arr)
{
	int max = 0;
	int s_max = 0;
	int n = arr.size();
	
	std::sort(arr.begin(), arr.end());
	
	for(int i = 0 ; i<n ; i++)
	{
		if(max<arr[i])
		{
		 max = arr[i];	
		}
		
		if(i>0 and s_max<=max)
		{
			s_max = arr[i-1];
		}	
   }
   return s_max ;
}

// Approrach 2 -> time complexity O(n)


int second_largest_element(vector<int> &arr){
	
	int n = arr.size();
	
	int max = -1, max_s = -1;
	
	
	for(int i = 0 ; i<n ; i++)
	{
		
		if(max<arr[i])
		{
			max_s = max;
			
			max = arr[i];
		}else if(arr[i] > max_s and max!=arr[i])
		{
			max_s = arr[i];
		}
	}
	return max_s;
}



int main()
{
//	vector<int> arr{1,2,3,4,5,6,7,8};

	vector<int> arr{1,2,3,4,5,6,777,8};
	
	int elm = second_largest_elm(arr);
	
	cout<<"Time complexity O(nlogn) Second largest element = "<<elm<<endl;
	
	
	
	int elme = second_largest_element(arr);
	
	cout<<"Time complexity O(n) Second largest element = "<<elme<<endl;
	
	return 0;
}
