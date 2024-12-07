/*Array Reverse */

#include<iostream>
#include<vector>

using namespace std;



// Approach -1

vector<int> array_reverse(vector<int> &arr)
{
	int n = arr.size();
	
	vector<int>tempArr;
		
	for(int i = n-1 ; i>=0 ; i--)
	{
		tempArr.push_back(arr[i]);
	}
	
	return tempArr;
}


// Approach - 2 : Using two pointer

void array_reverse_with_2P(vector<int> &arr){
	
	int l = 0; // left 
	int r = arr.size()-1; // right
		
	// iterate till left is less than right
	while(l<r)
	{
		// Swap left and right pointer
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
	
	// Increament left
	  l++;
	  
	  //Decrement right
	  r--;
			
	}
			
}


// Approach - 3

void array_reverse_with_swapA(vector<int>& arr)
{
	
	int n = arr.size();
	// Iterate half of the array
	for(int i = 0 ; i <n/2 ; i++)
	{
		swap(arr[i], arr[n-i-1]);
	}	
}


//Approach -4 


void array_reverse_with_recursion(vector<int>&arr, int left, int right)
{
	// if l is greater than right the return from function
	if(left>=right){
		
		return ;
	}
	
	// Swap the left and right element
	
	swap(arr[left], arr[right]);
	
	// Call the funtion recursively
	array_reverse_with_recursion(arr, left+1, right-1);	
}



int main()
{
	vector<int>arr{1,2,3,4,55,66,77,88};
	
	vector<int> values = array_reverse(arr);
	
	cout<<"Reversed array element: "<<endl;
	for(auto v : values)
	{
		cout<<v<<", ";
	}
    
    
   cout<<endl<<"Approach - 2"<<endl;
	
	 array_reverse_with_2P(arr);
	 
	 cout<<"Reversed array element: "<<endl;
	 for(auto v : arr)
	 {
	 	cout<<v<<", ";
	 }
	
	
	
	vector<int>arr3{111,2222,33333,444444,55,66,77,88};
	 cout<<endl<<"Approach - 3 "<<endl;
	
	 array_reverse_with_swapA(arr3);
	 
	 cout<<"Reversed array element: "<<endl;
	 for(auto v : arr3)
	 {
	 	cout<<v<<", ";
	 }
	
	
	vector<int>arr4{000,123,1234,123456,5,6,7,8};
	 cout<<endl<<"Approach - 4 "<<endl;
	 
	 int n = arr4.size();
	
	 array_reverse_with_recursion(arr4, 0, n-1);
	 
	 cout<<"Reversed array element: "<<endl;
	 for(auto v : arr4)
	 {
	 	cout<<v<<", ";
	 }
	
	
	return 0;
}