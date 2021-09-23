#include <iostream>

using namespace std;

int main()
{
    int D, d, P, Q, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> D >> d >> P >> Q;
        int m = P;
        for (int i = 1; i <= D; i++)
        {
            if (i % d == 0)
            {
                P = P + Q;
            }
            m += P;
        }
        cout << P;
    }
    return 0;
}