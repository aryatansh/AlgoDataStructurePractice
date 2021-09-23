#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t = 0;
    cin >> t;
    int s1, s2, s3, s4;
    for (int i = 0; i < t; i++)
    {
        cin >> s1 >> s2 >> s3 >> s4;
        int o = (s3 / s1) + (s4 / s2);
        cout << o << endl;
    }
}
