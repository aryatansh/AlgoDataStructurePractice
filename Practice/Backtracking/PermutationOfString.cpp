#include <iostream>
using namespace std;

void permute(string s, int i)
{
    if (i == s.size())
    {
        cout << s << endl;
    }
    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        permute(s, i + 1);
        swap(s[i], s[j]);
    }
}

int main()
{
    string s = "abc";
    permute(s, 0);
    return 0;
}