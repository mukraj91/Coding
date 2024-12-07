/*Cyclic rorate by one*/

#include<iostream>
#include<vector>
using namespace std;



void cyclic_array_rorate_by_one(vector<int>&arr)
{
	cout<<"Approach -1 : "<<endl;
	int n = arr.size();
	
	int last_elm = arr[n-1]; // Store last elemnt
	
	
	
	for(int i = n-1; i>0; i--)
	{
		arr[i] = arr[i-1];
	}
	
	arr[0] = last_elm;
}


// Approach -2 

void cyclic_array_rorate_by_one_2p(vector<int>&arr){
	
	cout<<"Approach -2"<<endl;
	
	int left = 0;
	int right = arr.size()-1;
	
	while(left!= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		
		
		// Only increment left
		left++;
		
	}
	
}




int main()
{
	
	vector<int>arr{1,2,3,4,5,6};
	
	cyclic_array_rorate_by_one(arr);
	cout<<"After cyclic rorate by one"<<endl;
	for(auto v: arr)
	{
		cout<<v<<", ";
	}
	
	cout<<endl;
		
	vector<int>arr2{11,22,33,44,55,66};
	
	cyclic_array_rorate_by_one_2p(arr2);
	cout<<"After cyclic rorate by one"<<endl;
	for(auto v: arr2)
	{
		cout<<v<<", ";
	}
		
}