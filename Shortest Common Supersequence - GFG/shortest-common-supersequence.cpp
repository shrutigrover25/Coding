// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    
int lcs(string X, string Y, int m, int n)
{
    int L[m + 1][n + 1];
    int i, j;
 
    // Following steps build L[m + 1][n + 1]
    // in bottom up fashion. Note that
    // L[i][j] contains length of LCS of
    // X[0..i - 1] and Y[0..j - 1]
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
 
            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
 
            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
 
    // L[m][n] contains length of LCS
    // for X[0..n - 1] and Y[0..m - 1]
    return L[m][n];
}
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
       int l = lcs(X, Y, m, n);
 
    // Result is sum of input string
    // lengths - length of lcs
      return (m + n - l);
    }
};

// { Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}

  // } Driver Code Ends