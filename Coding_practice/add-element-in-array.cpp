/*
Program of the insert of an element in an array at a specific position in  C++
*/

#include<iostream>

using namespace std;

int main()
{
    int array[100], position, i, n, value;

    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    for(i = 0 ; i <n ; i++)
    {
        cin>>array[i];
    }

    // print the elements from array
     cout<<endl;

    for(i = 0 ; i<n ; i++)
    {
        cout<<array[i]<<endl;
    }

    cout<<"Enter the location where you wish to insert the elements"<<endl;
    cin>>position;

    if(position<n)
    { 
    cout<<"Enter the value you want to insert"<<endl;
    cin>>value;

    for(i = n; i>=position; i--)
    {
        array[i+1] = array[i];
    }

    array[position] = value;
    }

    // print the elements from array after insertion
     cout<<endl;

    for(i = 0 ; i<=n ; i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}

