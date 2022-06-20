#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n = 0;
        cin >> n;
        vector<int> a = {0};
        int count = 0;
        if (n == 0)
        {
            cout << 0 << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int gcd_val = __gcd(a[i], 2 * a[j]);
                if (gcd_val > 1)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}