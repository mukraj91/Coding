#include<iostream>
using namespace std;
 
int toggleKthBit(int n, int k)
{

    int count = 0;
    int value;

     while(count < k)
     {
         value =  (n ^ (1 << (k-1)));
         count++;

     }

     if(k!= 0)
      return toggleKthBit(value, k);    
}
 
// Driver code
int main()
{
    int n = 5, k = 1;
    cout << toggleKthBit(n , k);
    return 0;
}