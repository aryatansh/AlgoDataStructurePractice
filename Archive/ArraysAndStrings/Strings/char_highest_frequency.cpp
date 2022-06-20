// Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

// Input Format
// String

// Constraints
// A string of length between 1 to 1000.

// Output Format
// Character

// Sample Input
// aaabacb
// Sample Outputß
// a
// Explanation
// For the given input string, a appear 4 times. Hence, it is the most frequent character.

#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string a;
    cin >> a;
    unordered_map<char, int> um;
    for (int i = 0; i < a.size(); i++)
    {
        auto it = um.find(a[i]);
        if (it != um.end())
        {
            int x = um[a[i]];
            um[a[i]] = x + 1;
        }
        else
        {
            um.insert(make_pair(a[i], 1));
        }
    }
    char max;
    int maxint = 0;
    for (auto it = um.begin(); it != um.end(); it++)
    {
        if (maxint < it->second)
        {
            max = it->first;
            maxint = it->second;
        }
    }
    cout << max;

    return 0;
}