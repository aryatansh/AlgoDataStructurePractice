// A.String Building
//     time limit per test2 seconds
//         memory limit per test512 megabytes
//             inputstandard input
//                 outputstandard output
//                     You are given a string ๐ .You have to determine whether it is possible to build the string ๐  out of strings aa,
//     aaa, bb and / or bbb by concatenating them.You can use the strings aa, aaa, bb and / or bbb any number of times and in any order.

//                                                                                                 For example :

//     aaaabbb can be built as aa + aa + bbb;
// bbaaaaabbb can be built as bb + aaa + aa + bbb;
// aaaaaa can be built as aa + aa + aa;
// abab cannot be built from aa, aaa, bb and/or bbb.
// Input
// The first line contains one integer ๐ก (1โค๐กโค1000) โ the number of test cases.

// Each test case consists of one line containing the string ๐  (1โค|๐ |โค50), consisting of characters a and/or b.

// Output
// For each test case, print YES if it is possible to build the string ๐ . Otherwise, print NO.

// You may print each letter in any case (for example, YES, yes, Yes will all be recognized as positive answer, NO, no and nO will all be recognized as negative answer).

// Example
// inputCopy
// 8
// aaaabbb
// bbaaaaabbb
// aaaaaa
// abab
// a
// b
// aaaab
// bbaaa
// outputCopy
// YES
// YES
// YES
// NO
// NO
// NO
// NO
// YES
// Note
// The first four test cases of the example are described in the statement.

#include <iostream>

using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a;
        cin >> a;
        int l = a.size();
    }

    return 0;
}