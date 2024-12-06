#include<iostream>
#include<string>

using namespace std;

// Returns the length of the longest palindromic subsequence in 'str'
int lps(string S)
{
	int n = S.size();
    
	// Create a table to store  results of subproblems
	int L[n][n];

	// Strings of length 1 are palindrome of length 1
	for (int i = 0; i < n; i++)
		L[i][i] = 0;
	for (int cl=2; cl<=n; cl++)
	{
		for (int i=0; i<n-cl+1; i++)
		{
			int j = i+cl-1;
		    if (S[i] == S[j])
				L[i][j] = L[i+1][j-1];
			else
				L[i][j] = min(L[i][j-1], L[i+1][j]) + 1;
		}
	}

	// length of longest palindrome
	return L[0][n-1];
}


int main()
{
	string str = "opengenus";
	cout << "\nMinimum number of deletions required = "
		<< lps(str);
	return 0;
}