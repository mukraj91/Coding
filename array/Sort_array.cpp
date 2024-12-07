/*Sort the array*/

#include<iostream>
#include<vector>

using namespace std;


// Approach -1 -> Time complexity O(n2)

void sort_arr(vector<int>&arr)
{
	cout<<"Approch -1: "<<endl;
	int n = arr.size();
	
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = i+1; j<n ; j++)
		{
			if(arr[i]> arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main()
{
	vector<int>arr{100,20,40,50,10,222};
	
	sort_arr(arr);
	for(auto v: arr)
	{
		cout<<v<<", ";
	}
	
	cout<<endl;
	
	return 0;
}