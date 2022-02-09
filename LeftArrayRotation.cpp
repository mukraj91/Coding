#include<iostream>
#include<vector>
using namespace std;

vector<int> leftRotation(int d, vector<int> arr)
{
    int i;
    vector<int> tempArray;
    int val;

    for(i = 0 ; i<d ; i++)
    {
      val = arr.at(i);
      tempArray.push_back(val);
    }

    for(auto it = tempArray.begin() ; it != tempArray.end() ; it++)
    {
        arr.push_back(*it);
    }

     arr.erase(arr.begin(), arr.begin() + d);

    return arr;
}

int main()
{
vector<int>arr{1, 2, 3, 4, 5};
int d = 2;
auto results= leftRotation(d, arr);

for(auto i : results)
{
    cout<<"Vector element: "<<i<<" "<<endl;
}


}