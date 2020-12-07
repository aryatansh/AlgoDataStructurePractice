//Sample Input
//5
//Sample Output
//1 2 3 4 5
// 1 2 3 4 *
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *

#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    cin >> count;
    int k = 1;
    int c = count;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << j << " ";
        }
        if (i > 1)
        {
            for (int j = 0; j < k; j++)
            {
                cout << "*"
                     << " ";
            }
            k = k + 2;
        }
        c--;
        cout << endl;
    }
    return 0;
}