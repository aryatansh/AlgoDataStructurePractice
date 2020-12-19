#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string &s)
{
    string rev = s;
    reverse(rev.begin(), rev.end());
    cout << rev;
    return s == rev;
}
int main()
{
    string a = "abc";
    cout << isPalindrome(a);
}