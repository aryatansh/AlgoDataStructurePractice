// There are N seats in a row. You are given a string S with length N; for each valid i, the i-th character of S is '0' if the i-th seat is empty or '1' if there is someone sitting in that seat.

// Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?

// Input
// The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
// The first and only line of each test case contains a single string S.
// Output
// For each test case, print a single line containing one integer ― the number of groups.

// Constraints
// 1≤T≤50
// 1≤N≤105
// Subtasks
// Subtask #1 (100 points): original constraints

// Example Input
// 3
// 000
// 010
// 101
// Example Output
// 0
// 1
// 2
// Explanation
// Example case 1: Since all seats are empty, the number of groups is 0.

// Example case 2: Since only one seat is occupied, the number of groups is 1.

// Example case 3: Here, two seats are occupied, but since they are not adjacent, the people sitting on them belong to different groups

#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s = "";
        cin >> s;
        int j = 0;
        int count = 0;
        while (j < s.size())
        {
            if (s[j] == '1')
            {
                count++;
                while (s[j] == '1')
                {
                    j++;
                }
            }
            else
            {
                j++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
