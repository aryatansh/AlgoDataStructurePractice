// Only x hours are left for the March Long Challenge to end and Chef is only left with the last problem and he is sure that he can't complete the problem in this much time. As per his experience, he figures out that he needs exactly H hours to solve the problem.

// Now he finally decides to use his special powers which he has gained through several years of intense yoga. He can travel back in time using his concentration. In total his power allows him to travel to N different time zones which are T1,T2,…,TN units of time behind the present time.

// Find whether he can use one of the available time zones to solve the problem and submit it before the contest ends.

// Input:
// First line contains 3 space separated integers, N, H and x representing number of time zones, total time required to solve the problem and time remaining for the contest to finish respectively.
// Second line contains N space separated integers, T1,T2,…,TN, description of N time zones.
// Output:
// Output in a single line answer, "YES" if Chef can solve the problem in the given time and "NO" if not.

// Note: The output is case-insensitive ― each letter may be printed in upper case or lower case.

// Constraints
// 1≤N≤100.
// 1≤x<H≤100
// 1≤Ti≤100.
// Subtasks
// 100 points : Original Constraints
// Sample Input 1:
// 2 5 3
// 1 2
// Sample Output 1:
// YES
// Explanation:
// Chef already has 3 hours left. Using the second tunnel Chef can go 2 hours back in time gaining a total of 3+2=5 hours which is sufficient to solve the problem.

// Sample Input 2:
// 2 6 3
// 1 2
// Sample Output 2:
// NO
// Explanation:
// If Chef uses the first tunnel, he in total will have 3+1=4 hours which is insufficient to solve the problem.

// If Chef uses the second tunnel, he in total will have 3+2=5 hours which is insufficient to solve the problem.

// Since none of the tunnel can be used to gain sufficient time to solve the problem, Chef is incapable of solving it.

// #include <iostream>

// using namespace std;

int main()
{
    int n, h, x;
    cin >> n >> h >> x;
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a + x >= h)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}