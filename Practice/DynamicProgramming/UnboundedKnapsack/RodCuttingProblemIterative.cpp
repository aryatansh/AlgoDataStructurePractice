// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
private:
    int cutRodRec(int price[], int n, int i, vector<vector<int>> &cache)
    {
        if (i == 0 || n == 0)
        {
            return 0;
        }
        if (cache[i][n] != -1)
        {
            return cache[i][n];
        }
        int inc = 0;
        if (i <= n)
        {
            inc = price[i - 1] + cutRodRec(price, n - i, i, cache);
        }
        int exc = cutRodRec(price, n, i - 1, cache);
        return cache[i][n] = max(inc, exc);
    }

public:
    int cutRod(int price[], int n)
    {
        vector<vector<int>> cache(n + 1, vector<int>(n + 1, -1));
        return cutRodRec(price, n, n, cache);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
} // } Driver Code Ends