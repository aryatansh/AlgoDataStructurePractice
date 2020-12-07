#include <iostream>
#include <string>

using namespace std;

bool compare(const string a, const string b)
{
    if (a.length() == b.length())
    {
        return a > b;
    }
    return a.length() > b.length();
}
int main()
{
    string s[1000];
    int in = 0;
    cin >> in;
    cin.get();
    for (int i = 0; i < in; i++)
    {
        getline(cin, s[i]);
    }
    sort(s, s + in, compare);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < in; i++)
    {
        cout << s[i] << endl;
    }

    return 0;
}