// You are given n activities (from 0 to n-1) with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

// Input Format
// The first line consists of an integer T, the number of test cases. For each test case, the first line consists of an integer N, the number of activities. Then the next N lines contain two integers m and n, the start and end time of each activity.

// Constraints
// 1<=t<=50
// 1<=n<=10000
// 1<=A[i]<=100

// Output Format
// For each test case find the maximum number of activities that you can do.

// Sample Input
// 1
// 3
// 10 20
// 12 15
// 20 30
// Sample Output
// 2
// Explanation
// Person can only do 0th and 2nd activities.

#include <iostream>
#include <vector>
using namespace std;

struct Activity
{
    int start;
    int finish;
};

bool activityCompare(Activity s1, Activity s2)
{
    return (s1.finish < s2.finish);
}

void printMaxActivitiesCount(Activity arr[], int n)
{
    vector<int> v;
    reverse(v.)
    // Sort jobs according to finish time
    sort(arr, arr + n, activityCompare);

    // The first activity always gets selected
    int i = 0;

    int count = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j].start >= arr[i].finish)
        {
            count++;
            i = j;
        }
    }
    cout << count;
}
int main()
{
    int cases = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int activities = 0;
        cin >> activities;
        Activity arr[activities];
        for (int i = 0; i < activities; i++)
        {
            cin >> arr[i].start;
            cin >> arr[i].finish;
        }
        printMaxActivitiesCount(arr, activities);
    }

    return 0;
}