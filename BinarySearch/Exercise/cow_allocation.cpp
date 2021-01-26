// Farmer John has built a new long barn, with N (2 <= N <= 100,000) stalls. The stalls are located along a straight line at positions x1,…,xN (0 <= xi <= 1,000,000,000).

// His C (2 <= C <= N) cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, FJ wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?

// Input Format
// First line contains N and C, separated by a single space, representing the total number of stalls and number of cows respectively. The next line contains N integers containing the indexes of stalls.

// Constraints
// 2 <= N <= 100,000
// 0 <= xi <= 1,000,000,000
// 2 <= C <= N

// Output Format
// Print one integer: the largest minimum distance.

// Sample Input
// 5 3
// 1 2 8 4 9
// Sample Output
// 3
// Explanation
// Problem Credits - (Spoj)[http://www.spoj.com/problems/AGGRCOW/]

#include <iostream>
#include <algorithm>

using namespace std;
typedef long long int ll;
bool valid(ll n, ll k, ll a[], ll mid, ll sum)
{
    int prod = 0, painter = 1;
    for (int i = 0; i < n; i++)
    {
        if (prod + a[i] > mid)
        {
            // k-=1;
            painter += 1;
            if (painter > k)
                return false;
            // prod = 0;
            prod = a[i];
        }
        else
        {
            prod += a[i];
        }
    }
    return true;
}

ll paint(ll n, ll k, ll t, ll a[], ll start, ll sum)
{
    ll low = start, high = sum, ans = 0;
    ll mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (valid(n, k, a, mid, sum))
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return (ans % 10000003 * t) % 10000003;
}

int main()
{
    ll n, k, t, sum = 0;
    cin >> n >> k >> t;
    ll a[n], s = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        s = max(s, a[i]);
    }
    // sort(a, a + n);
    cout << paint(n, k, t, a, s, sum);
    return 0;
}