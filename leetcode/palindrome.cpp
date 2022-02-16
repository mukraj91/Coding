/*
Write a program to check if a number is a palindrome or not.
*/
#include<iostream>

using namespace std;

int main()
{
    int n = 11211;

    int reverse = 0;
    int rem;
  int temp = n;
    while(n>0)
    {

        reverse = reverse*10 + n%10;

        n = n/10;
    }
  
  if(temp == reverse)
  {
      cout<<"Number is palindrome"<<endl;
  }
  else{

      cout<<"Number is not a palindrome"<<endl;

  }

    return 0;
}