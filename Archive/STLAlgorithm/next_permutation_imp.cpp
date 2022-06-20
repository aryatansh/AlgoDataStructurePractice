// Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

// If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

// Note: The replacement must be in-place, do not allocate extra memory.

// Input Format
// The First Line contains the Number of test cases T.
// Next Line contains an Integer N, number of digits of the number.
// Next Line contains N-space separated integers which are elements of the array 'Arr'.

// Constraints
// 1 <= T <= 100
// 1 <= N <= 1000
// 0 <= Ai <= 9

// Output Format
// Print the Next Permutation for each number separated by a new Line.

// Sample Input
// 2
// 3
// 1 2 3
// 3
// 3 2 1

// Sample Output
// 1 3 2
// 1 2 3

// Explanation
// Possible permutations for {1,2,3} are {1,2,3} , {1,3,2} , {2,1,3} , {2,3,1}, {3,1,2} and {3,2,1}. {1,3,2} is the immediate next permutation after {1,2,3}.
// For the second testcase , {3,2,1} is the last configuration so we print the first permutation as its next permutation.

// Code Edit

//Solution Steps
// I) Traverse the given number from rightmost digit, keep traversing till you find a digit which is smaller than the previously traversed digit. For example, if the input number is “534976”, we stop at 4 because 4 is smaller than next digit 9. If we do not find such a digit, then output is “Not Possible”.

// II) Now search the right side of above found digit ‘d’ for the smallest digit greater than ‘d’. For “534976″, the right side of 4 contains “976”. The smallest digit greater than 4 is 6.

// III) Swap the above found two digits, we get 536974 in above example.

// IV) Now sort all digits from position next to ‘d’ to the end of number. The number that we get after sorting is the output. For above example, we sort digits in bold 536974. We get “536479” which is the next greater number for input 534976.

// Following are the implementation of above approach.

#include <iostream>
#include <algorithm>
using namespace std;

void print_next_permutation(int *a, int n)
{
    bool perm_found = false;
    int i = n - 2;
    while (i >= 0)
    {
        if (a[i] < a[i + 1])
        {
            int max = a[i + 1];
            int max_index = i + 1;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < max && a[j] > a[i])
                {
                    max = a[j];
                    max_index = j;
                }
            }
            swap(a[i], a[max_index]);
            sort(a + i + 1, a + n);
            perm_found = true;
            break;
        }
        i--;
    }
    if (!perm_found)
    {
        sort(a, a + n);
    }
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << endl;
}

int main()
{
    int tests = 0;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        int arr_size = 0;
        cin >> arr_size;
        int arr[arr_size];
        for (int i = 0; i < arr_size; i++)
        {
            cin >> arr[i];
        }
        print_next_permutation(arr, arr_size);
    }

    return 0;
}