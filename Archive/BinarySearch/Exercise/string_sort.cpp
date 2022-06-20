// Nishant is a very naughty boy in Launchpad Batch. One day he was playing with strings, and randomly shuffled them all. Your task is to help Nishant Sort all the strings ( lexicographically ) but if a string is present completely as a prefix in another string, then string with longer length should come first. Eg bat, batman are 2 strings and the string bat is present as a prefix in Batman - then sorted order should have - Batman, bat.

// Input Format
// N(integer) followed by N strings.

// Constraints
// N<=1000

// Output Format
// N lines each containing one string.

// Sample Input
// 3
// bat
// apple
// batman
// Sample Output
// apple
// batman
// bat
// Explanation
// In mathematics, the lexicographic or lexicographical order (also known as lexical order, dictionary order, alphabetical order or lexicographic(al) product) is a generalization of the way words are alphabetically ordered based on the alphabetical order of their component letters.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool string_compare(string a, string b)
{
    bool is_substring = true;
    if (a.size() > b.size())
    {
        for (int i = 0; i < b.size(); i++)
        {
            if (a[i] != b[i])
            {
                is_substring = false;
            }
        }
        if (is_substring)
        {
            return true;
        }
    }
    if (b.size() > a.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
            {
                is_substring = false;
            }
        }
        if (is_substring)
        {
            return false;
        }
    }
    return a < b;
}
int main()
{
    int x = 0;
    cin >> x;
    vector<string> st;
    for (int i = 0; i < x; i++)
    {
        string y = "";
        cin >> y;
        st.push_back(y);
    }
    sort(st.begin(), st.end(), string_compare);
    return 0;
    for (int i = 0; i < x; i++)
    {
        cout << st[i] << endl;
    }
}