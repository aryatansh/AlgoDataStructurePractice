// You are given number of pages in n different books and m students. The books are arranged in ascending order of number of pages. Every student is assigned to read some consecutive books. The task is to assign books in such a way that the maximum number of pages assigned to a student is minimum.

// Input Format
// First line contains integer t as number of test cases. Next t lines contains two lines. For each test case, 1st line contains two integers n and m which represents the number of books and students and 2nd line contains n space separated integers which represents the number of pages of n books in ascending order.

// Constraints
// 1 < t < 50
// 1< n < 100
// 1< m <= 50
// 1 <= Ai <= 1000

// Output Format
// Print the maximum number of pages that can be assigned to students.

// Sample Input
// 1
// 4 2
// 12 34 67 90
// Sample Output
// 113
// Explanation
// 1st students : 12 , 34, 67 (total = 113)
// 2nd students : 90 (total = 90)
// Print max(113, 90)
#include <iostream>

using namespace std;
bool is_allocation_possible(int *a, int n, int m, int t)
{
    int sum = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] > t)
        {
            student++;
            sum = a[i];
            if (student > m)
            {
                return false;
            }
        }
        else
        {
            sum += a[i];
        }
    }
    return true;
}

int book_allocation(int *a, int n, int m)
{
    int s = a[n - 1];
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        e += a[i];
    }
    cout << e << endl
         << endl;
    int ans = 0;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (is_allocation_possible(a, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int cases = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int books = 0;
        int students = 0;
        cin >> books >> students;
        int arr[books];
        for (int i = 0; i < books; i++)
        {
            cin >> arr[i];
        }
        cout << book_allocation(arr, books, students) << endl;
    }

    return 0;
}