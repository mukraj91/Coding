#include<iostream>

using namespace std;


int main()
{  
    int n = 0;
    
    int d1 = 15, d2 = 5, d3 = 3;
    
  for(int n = 1; n <=100; n++) {
       
    
    if( (n - d1  * ( n/d1)) == 0)
    {
        cout<< n << ": " << "#"<<endl;
    }
    else if((n - d2  * ( n/d2)) == 0)
    {
         cout<<n << ": " <<"&"<<endl;
    }
    else if((n - d3  * ( n/d3))== 0)
    {
        cout<<n << ": " <<"@"<<endl;
    }
    
  }
    return 0 ;
}
