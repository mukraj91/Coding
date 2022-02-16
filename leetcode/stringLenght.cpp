/*Find the string lenght without strlen() function*/

#include<iostream>

using namespace std;
int main()
{
    char str[50];
    int l, lenght = 0;
    cout<<"Enter a string\n";
    cin>>str;
    cout<<"String lenght = "<<str<<endl;

    for(int i = 0 ; i<str[i]!= 0; i++)
    {
        lenght++;
    }

    cout<<"Lenght = "<<lenght;

    return 0;
}