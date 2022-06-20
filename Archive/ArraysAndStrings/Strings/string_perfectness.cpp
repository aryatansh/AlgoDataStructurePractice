// Kartik Bhaiya has a string consisting of only 'a' and 'b' as the characters. Kartik Bhaiya describes perfectness of a string as the maximum length substring of equal characters. Kartik Bhaiya is given a number k which denotes the maximum number of characters he can change. Find the maximum perfectness he can generate by changing no more than k characters.

// Input Format
// The first line contains an integer denoting the value of K. The next line contains a string having only ‘a’ and ‘b’ as the characters.

// Constraints
// 2 ≤ N ≤ 10^6

// Output Format
// A single integer denoting the maximum perfectness achievable.

// Sample Input
// 2
// abba
// Sample Output
// 4
// Explanation
// We can swap the a's to b using the 2 swaps and obtain the string "bbbb". This would have all the b's and hence the answer 4.
// Alternatively, we can also swap the b's to make "aaaa". The final answer remains the same for both cases.

// C++ program to find maximum length equal
// character string with k changes
#include <iostream>
using namespace std;

// function to find the maximum length of
// substring having character ch
int findLen(string &A, int n, int k, char ch)
{
    int maxlen = 1;
    int cnt = 0;
    int l = 0, r = 0;

    // traverse the whole string
    while (r < n)
    {

        /* if character is not same as ch 
           increase count */
        if (A[r] != ch)
            ++cnt;

        /* While  count > k  traverse the string 
           again until count becomes less than k  
           and decrease the count when characters  
           are not same */
        while (cnt > k)
        {
            if (A[l] != ch)
                --cnt;
            ++l;
        }

        /* length of substring will be rightIndex - 
           leftIndex + 1. Compare this with the maximum 
           length and return maximum length */
        maxlen = max(maxlen, r - l + 1);
        ++r;
    }
    return maxlen;
}

// function which returns maximum length of substring
int answer(string &A, int n, int k)
{
    int maxlen = 1;
    for (int i = 0; i < 26; ++i)
    {
        maxlen = max(maxlen, findLen(A, n, k, i + 'A'));
        maxlen = max(maxlen, findLen(A, n, k, i + 'a'));
    }
    return maxlen;
}

int main()
{
    int k = 0;
    cin >> k;
    string s;
    cin >> s;
    cout << answer(s, s.size(), k) << endl;
}