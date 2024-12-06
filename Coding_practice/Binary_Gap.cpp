/*
https://app.codility.com/c/run/training52XZWN-FYY/
A binary gap within a positive integer N is any maximal 
sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.
*/

#include<iostream>
#include<vector>
using namespace std;

void findBinaryGap(int n)
{
    int gap = 0;
     int r;
    vector<int> v;
     int i = 0;
    while(n>0)
    {
         r = n%2;
         n = n/2;
         v.push_back(r);
    }
    
     for(auto itr = v.rbegin(); itr!= v.rend() ; itr++)
     {
         cout<< *itr<<" "<<endl;
     }


   // return gap;
}

int main()
{

   int n;
   cin>>n;
  //int value =  findBinaryGap(n);

   findBinaryGap(n);

  //cout<<"valaue = "<<endl;

    return 0;
}