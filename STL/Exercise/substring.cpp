#include <bits/stdc++.h>
#define int long long int
using namespace std;

int mod = 1e9 + 7;

int count(vector<int> &v, int n)
{
    if (n == 0)
        return 0;

    int num = 0;
    int i = 0, j = 0;
    set<int> contains;
    contains.insert(v[i]);

    while (i != n - 1 || j != n - 1)
    {
        if (j == n - 1)
        {
            int len = j - i + 1;
            int sum = (len * (len + 1)) / 2;
            sum = sum % mod;
            num = (num + sum) % mod;
            contains.erase(v[i]);
            i++;
        }
        else if (i == j)
        {
            if (contains.find(v[j + 1]) == contains.end())
            {
                contains.insert(v[j + 1]);
                j++;
            }
            else
            {
                num = (num + 1) % mod;
                i++;
                j++;
            }
        }
        else
        {
            if (contains.find(v[j + 1]) == contains.end())
            {
                contains.insert(v[j + 1]);
                j++;
            }
            else
            {
                int len = j-i+1;
                int sum = (len * (len + 1)) / 2;
                sum = sum % mod;
                num = (num + sum) % mod;
                contains.erase(v[i]);
                i++;
            }
        }
    }

    num=(num+1)%mod;
    return num;
}

int32_t main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout<<count(v,n);
}