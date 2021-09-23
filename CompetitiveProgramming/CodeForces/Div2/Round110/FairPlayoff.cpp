#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    int s1, s2, s3, s4, out1, out2, final1, final2;

    for (int i = 0; i < t; i++)
    {
        cin >> s1 >> s2 >> s3 >> s4;
        out1 = max(s1, s2);
        out2 = max(s3, s4);
        final1 = max(s1, max(s2, max(s3, s4)));
        if (s1 == final1)
        {
            final2 = max(s2, max(s3, s4));
        }
        else if (s2 == final1)
        {
            final2 = max(s1, max(s3, s4));
        }
        else if (s3 == final1)
        {
            final2 = max(s1, max(s2, s4));
        }
        else if (s4 == final1)
        {
            final2 = max(s1, max(s2, s3));
        }

        if (out1 == final1 || out1 == final2)
        {
            if (out2 == final2 || out1 == final2)
            {
                cout << "YES" << endl;
                continue;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}