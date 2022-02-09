#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<int> matchingStrings(vector<string> strings, vector<string> queries) {

int qLen = queries.size(); // Size of the query
vector<int> temp(qLen, 0); // Initialize the value with zero
int i;
for(i = 0; i<qLen; i++)
{
    for(auto str:strings)
    {
        if(queries[i] == str){

            temp[i]++;

        }
    }
}
    return temp;
}


int main()
{


    const vector<string>arrayString{"ab", "xyz", "ab"};
    const vector<string>queryString{"ab", "yz", "xyz"};

    auto results = matchingStrings(arrayString, queryString); // Calling matching strings functions

    for(auto value : results)
    {
        cout<<value<<endl;
    }

    return 0;
}