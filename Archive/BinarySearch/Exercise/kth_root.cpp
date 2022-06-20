//You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.
// Input Format
// First line contains number of test cases, T. Next T lines contains integers, n and k.

// Constraints
// 1<=T<=10
// 1<=N<=10^15
// 1<=K<=10^4

// Output Format
// Output the integer x

// Sample Input
// 2
// 10000 1
// 1000000000000000 10
// Sample Output
// 10000
// 31
// Explanation
// For the first test case, for x=10000, 10000^1=10000=n

#include <iostream>
#include <cmath>
#define int long long
using namespace std;

bool is_root(int n, int k, int x)
{
    return (pow(x, k) <= n) ? true : false;
}

int kth_root(int n, int k)
{
    int s = 1;
    int e = n;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (is_root(n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int32_t main()
{
    int tests = 0;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << kth_root(a, b) << endl;
    }

    return 0;
}