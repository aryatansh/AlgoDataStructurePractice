// You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003

// Input Format
// First line contains three space seperated integers N,K and T ,where
// N = Size of array,
// K = No of painters available ,
// T = Time taken to print each board by one painter
// Next line contains N space seperated positive integers denoting size of N boards.

// Constraints
// 1<=N<=100000
// 1<=K<=100000
// 1<=T<=1000000
// 1<=Li<=100000

// Output Format
// Return minimum time required to paint all boards % 10000003.

// Sample Input
// 2 2 5
// 1 10
// Sample Output
// 50
// Explanation
// The first painter can paint the first board in 5 units of time and the second painter will take 50 units of time to paint the second board. Since both can paint simultaneously , the total time required to paint both the boards is 50.

// CPP program for The painter's partition problem
#include <climits>
#include <iostream>
using namespace std;

// function to calculate sum between two indices
// in array
int sum(int arr[], int from, int to)
{
    int total = 0;
    for (int i = from; i <= to; i++)
        total += arr[i];
    return total;
}

// for n boards and k partitions
int partition(int arr[], int n, int k)
{
    // base cases
    if (k == 1) // one partition
        return sum(arr, 0, n - 1);
    if (n == 1) // one board
        return arr[0];

    int best = INT_MAX;

    // find minimum of all possible maximum
    // k-1 partitions to the left of arr[i],
    // with i elements, put k-1 th divider
    // between arr[i-1] & arr[i] to get k-th
    // partition
    for (int i = 1; i <= n; i++)
        best = min(best, max(partition(arr, i, k - 1),
                             sum(arr, i, n - 1)));

    return best;
}

int main()
{
    int arr[] = {10, 20, 60, 50, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << partition(arr, n, k) << endl;

    return 0;
}