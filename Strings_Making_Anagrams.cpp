/*
https://www.hackerrank.com/challenges/ctci-making-anagrams/problem
*/

#include<iostream>
#include<string>

using namespace std;

int makeAnagram(string a, string b) 
{

    int deletedCharCount = 02;
    int Sa = a.size();
    int Sb = a.size();
    
     if(a.compare(b) == 0)
     {
           return 0;

     }
      
     else
     {


return deletedCharCount;

     }
    

return deletedCharCount;
}


int main()
{

string a;
getline(cin, a);

string b;
getline(cin, b);

 auto count = makeAnagram(a, b) ;



 cout<<"count of the deleted charater = "<<count<<endl;

    return 0;
}