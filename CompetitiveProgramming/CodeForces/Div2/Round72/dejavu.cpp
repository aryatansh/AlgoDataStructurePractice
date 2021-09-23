// A. Déjà Vu
// time limit per test1 second
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// A palindrome is a string that reads the same backward as forward. For example, the strings "z", "aaa", "aba", and "abccba" are palindromes, but "codeforces" and "ab" are not. You hate palindromes because they give you déjà vu.

// There is a string 𝑠. You must insert exactly one character 'a' somewhere in 𝑠. If it is possible to create a string that is not a palindrome, you should find one example. Otherwise, you should report that it is impossible.

// For example, suppose 𝑠= "cbabc". By inserting an 'a', you can create "acbabc", "cababc", "cbaabc", "cbabac", or "cbabca". However "cbaabc" is a palindrome, so you must output one of the other options.

// Input
// The first line contains a single integer 𝑡 (1≤𝑡≤104) — the number of test cases.

// The only line of each test case contains a string 𝑠 consisting of lowercase English letters.

// The total length of all strings does not exceed 3⋅105.

// Output
// For each test case, if there is no solution, output "NO".

// Otherwise, output "YES" followed by your constructed string of length |𝑠|+1 on the next line. If there are multiple solutions, you may print any.

// You can print each letter of "YES" and "NO" in any case (upper or lower).

// Example
// inputCopy
// 6
// cbabc
// ab
// zza
// ba
// a
// nutforajaroftuna
// outputCopy
// YES
// cbabac
// YES
// aab
// YES
// zaza
// YES
// baa
// NO
// YES
// nutforajarofatuna
// Note
// The first test case is described in the statement.

// In the second test case, we can make either "aab" or "aba". But "aba" is a palindrome, so "aab" is the only correct answer.

// In the third test case, "zaza" and "zzaa" are correct answers, but not "azza".

// In the fourth test case, "baa" is the only correct answer.

// In the fifth test case, we can only make "aa", which is a palindrome. So the answer is "NO".

// In the sixth test case, "anutforajaroftuna" is a palindrome, but inserting 'a' elsewhere is valid.

#include <iostream>

using namespace std;

bool is_palindrome(string c)
{
    int s = 0;
    int e = c.size() - 1;
    while (s <= e)
    {
        if (c[s] != c[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    int t = 0;
    cin >> t;
    char c = 'a';
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        string b = "";
        bool has_palindrome = false;
        for (int i = 0; i < a.size(); i++)
        {
            b = a.substr(0, i) + 'a' + a.substr(i, a.size() - i);
            if (!is_palindrome(b))
            {
                cout << "YES" << endl
                     << b << endl;
                has_palindrome = false;
                break;
            }
            else
            {
                has_palindrome = true;
            }
        }
        if (has_palindrome)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}