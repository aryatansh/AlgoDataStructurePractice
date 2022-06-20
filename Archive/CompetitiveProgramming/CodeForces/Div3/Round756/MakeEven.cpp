#include <iostream>
#include <string>
using namespace std;
void countToEven(int num)
{
    string a = to_string(num);
    if (num % 2 == 0)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < a.size() - 1; i++)
    {
        int index = a[i] - '0';
        if (index == a.size() - 2)
        {
            cout << i + 1 << endl;
        }
        if (index % 2 == 0)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    int tests = 0;
    cin >> tests;
    int a = 0;
    for (int i = 0; i < tests; i++)
    {
        cin >> a;
        countToEven(a);
    }
    return 0;
}