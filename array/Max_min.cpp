/* Find the minimum and maximum value of from the array*/

#include<iostream>
#include<vector>

using namespace std;


vector<int> max_min(const vector<int> &arr)
{
	
	int n = arr.size();
	
	vector<int>maxmin;
	
	int max = 0;
	int min = 0;
	
	for(int i = 0 ; i<n; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	
	maxmin.push_back(max);
	
	for(int i = 0 ; i<n; i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	
	maxmin.push_back(min);
	
	
	return maxmin;
}


int main()
{
	
	vector<int> val{1,2,3,4,5,6,7,83,0};
	
	vector<int>values = max_min(val);
		cout<<"Max element = "<< values[0]<< "  "<< "Min element = "<<values[1]<<endl;
	
	
	
	return 0;
}