// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

// Input

// The only input line contains a string of n characters.

// Output

// Print one integer: the length of the longest repetition.

// Constraints
// 1≤n≤106
// Example

// Input:
// ATTCGGGA

// Output:
// 3--

#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int i = 0;
    int k = 0;
    while (i < a.size())
    {
        if (a[i] == 'A' || a[i] == 'T' || a[i] == 'C' || a[i] == 'G')
        {
            char t = a[i];
            int l = 0;
            while (a[i] == t && i < a.size())
            {
                l++;
                i++;
            }
            k = max(k, l);
        }
        else
        {
            i++;
        }
    }
    cout << k;
    return 0;
}