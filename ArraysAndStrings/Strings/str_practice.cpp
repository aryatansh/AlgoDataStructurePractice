#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Apple";
    string s2 = "Apple10";
    cout << s.compare(s2) << endl;
    cout << s2.length() << endl;
    s2.clear();
    cout << s2.length();
    return 0;
}