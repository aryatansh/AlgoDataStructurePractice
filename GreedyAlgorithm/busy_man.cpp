
// BUSYMAN - I AM VERY BUSY
// #greedy
// I AM VERY BUSY
// You are actually very busy man. You have a big schedule of activities. Your aim is to do as much as activities as possible.

// In the given figure, if you go to date with crush, you cannot participate in the coding contest and you can’t watch the movie. Also if you play DotA, you can’t study for the exam. If you study for the exam you can’t sleep peacefully. The maximum number of activities that you can do for this schedule is 3.

// Either you can

// watch movie, play DotA and sleep peacefully (or)
// date with crush, play DotA and sleep peacefully
// Input Specifications
// The first line consists of an integer T, the number of test cases. For each test case the first line consists of an integer N, the number of activities. Then the next N lines contains two integers m and n, the start and end time of each activity.

// Output Specifications
// For each test case find the maximum number of activities that you can do.

// Input Constraints
// 1 <= T <=10
// 1 <= N <= 100000
// 0 <= start < end <= 1000000

// Example
// Sample Input: (empty lines just for clarity)
// 3
// 3
// 3 9
// 2 8
// 6 9

// 4
// 1 7
// 5 8
// 7 8
// 1 8

// 6
// 7 9
// 0 10
// 4 5
// 8 9
// 4 10
// 5 7

// Sample Output:
// 1
// 2
// 3

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t, n, s, e;
    cin >> t;
    vector<pair<int, int>> v;

    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }
        sort(v.begin(), v.end(), compare);

        int res = 1;
        int fin = v[0].second;
        for (int i = 1; i < n; i++)
        {
            if (v[i].first >= fin)
            {
                fin = v[i].second;
                res++;
            }
        }

        v.clear();
    }
}