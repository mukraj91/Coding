/* Find duplicate element in array*/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


// Approace -1 -> Time Complexity (O(n))


vector<int> find_dublicate_element(vector<int> &arr)
{
	// Declered unordered_map to count the frequence
	
	unordered_map<int,int>freq;
	
	for(auto v : arr)
	{
		freq[v]++; // Store occurance of the element 
	}
	
	
    // Store the duplicate number
	vector<int>duplicate;
		
	for(auto v : freq){
	cout<<v.first<<"   "<<v.second<<endl;
	
	if(v.second > 1)
	{
		duplicate.push_back(v.first); 
	}
}
    return duplicate;	
}



int main()
{
	vector<int>arr{11,11,22,22,33,33,33,44,55,44,55,55,66,11,11};
	
	auto duplicate = find_dublicate_element(arr);
	cout<<"Dublicate element are!"<<endl;
	for(auto v : duplicate)
	{
		cout<<v<<", ";
	}
	
	return 0;
}