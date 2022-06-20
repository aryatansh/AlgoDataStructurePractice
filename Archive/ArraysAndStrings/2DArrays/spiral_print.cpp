#include <iostream>

using namespace std;

void spiralprint(int a[1000][1000], int m, int n)
{
    cout << endl
         << endl;
    int sr = 0;
    int sc = 0;
    int er = m - 1;
    int ec = n - 1;
    while (sr <= er && sc <= ec)
    {
        for (int i = sc; i <= ec; i++)
        {
            cout << a[sr][i] << " ";
        }
        sr++;
        for (int i = sr; i <= er; i++)
        {
            cout << a[i][ec] << " ";
        }
        ec--;
        if (er > sr)
        {
            for (int i = ec; i >= sc; i--)
            {
                cout << a[er][i] << " ";
            }
            er--;
        }
        if (ec > sc)
        {
            for (int i = er; i >= sr; i--)
            {
                cout << a[i][sc] << " ";
            }
            sc++;
        }
    }
}
int main()
{
    int m, n = 0;
    cin >> m >> n;
    int arr[1000][1000];
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = k;
            k++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    spiralprint(arr, m, n);

    return 0;
}