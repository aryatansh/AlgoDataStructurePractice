#include <iostream>

using namespace std;

#define int long long
int32_t main()
{
    int count = 0;
    cin >> count;
    int n, m, r, c = 0;
    int seconds = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> n >> m >> r >> c;
        seconds = 0;
        int x, y = 0;
        if ((n - r) > (r - 1))
        {
            x = n;
        }
        else
        {
            x = 1;
        }
        if ((m - c) > (c - 1))
        {
            y = m;
        }
        else
        {
            y = 1;
        }
        seconds += abs(x - r);
        seconds += abs(y - c);
        cout << seconds << endl;
    }
    return 0;
}