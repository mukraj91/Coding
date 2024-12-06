/*
#include<iostream>
#include<vector>

using namespace std;


int minimumSwaps(vector<int> arr) 
{

 auto min = 0;

 int Size = arr.size();

 for(int i = Size -1; i >= 0; i--)
 {
     if(arr[i]>arr[i-1])
     {
        
     }
     else{
        int temp = arr[i-1];
         arr[i-1] = arr[i];
         arr[i] = temp;

         min++;
     }

     // cout<<"After Sorting the array elements"<<endl;

     

 }

 for(auto ar : arr){
         cout<<"  "<<ar;
     }

return min;
}

int main()
{

vector<int>array{1, 3, 5, 2, 4, 6, 7};

vector<int>array1{2, 3, 4, 1, 5};

auto value = minimumSwaps(array1);

cout<<"Minimum swap = "<<value<<endl;

return 0;

}

*/