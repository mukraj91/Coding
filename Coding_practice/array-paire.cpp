/*
There is a large pile of socks that must be paired by color. 
Given an array of integers representing the color of each sock, 
determine how many pairs of socks with matching colors there are.
Example
n = 7
 ar [ 1, 2, 1, 2, 1, 3, 2];
There is one pair of color  and one of color . There are three odd socks left, one of each color. The number of pairs is .
*/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    unordered_set<int> u;
    int pairs = 0;
    for(int i = 0; i < n; i++){
        if(u.find(ar[i]) == u.end())
            u.insert(ar[i]);
        else{
            pairs++;
            u.erase(ar[i]);
        }
    } 
    return pairs;

}

int main()
{

    int n = 7;
    vector<int>ar {1, 2, 1, 2, 1, 3, 2};
    auto value = sockMerchant(n, ar);

    cout<<"Value of paire= "<< value<<endl;
   
    return 0;
}