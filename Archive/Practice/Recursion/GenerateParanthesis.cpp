#include <iostream>
using namespace std;

bool rec(string a, int i, int comp)
{
    if (i == a.size() && comp == 0)
    {
        return true;
    }
    if (i == a.size() && comp != 0)
    {
        return false;
    }
    if (comp < 0)
    {
        return false;
    }
    bool sub = false;
    if (a[i] == '(')
    {
        sub = rec(a, i + 1, comp + 1);
    }
    if (a[i] == ')')
    {
        sub = rec(a, i + 1, comp - 1);
    }
    return sub;
}

int main()
{
    cout << rec("((()))", 0, 0) << endl;
    cout << rec("(())()", 0, 0) << endl;
    cout << rec("()()()", 0, 0) << endl;
    cout << rec("()))((", 0, 0) << endl;
    cout << rec("((((((", 0, 0) << endl;
    return 0;
}