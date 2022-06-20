//An array containg numbers. All numbers are present twice except for two numbers. Find the numbers

//Input -
//4
//3 1 2 1

//Output
//2 3

//Implementation
//Step 1 - DO XOR
//Step 2 - Find the unique set bit.
//Step 3 - find numbers that have set bit at the particular index and store it in array
//Step 4 - DO XOR of the new created array. That is the first number
//Step 5 - DO XOR of the first number with the result of first XOR operations. That is the second number
#include <iostream>
#include <vector>
using namespace std;

bool IsTheIndexSet(int a, int n)
{
    int mask = 1 << n;
    if (a & mask)
        return true;
    return false;
}

int FindFirstSetBitIndex(int a)
{
    int i = 1;
    int counter = 0;
    while (a > 0)
    {

        if ((a & i) == 1)
        {
            return counter;
        }
        a = a >> 1;
        counter++;
    }
    return 0;
}
void PrintTheUniqueNumbers(int *a, int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ a[i];
    }
    int index = FindFirstSetBitIndex(res);
    vector<int> setBitNumbers;
    for (int i = 0; i < n; i++)
    {
        if (IsTheIndexSet(a[i], index))
        {
            setBitNumbers.push_back(a[i]);
        }
    }
    int first_number = 0;
    for (int i = 0; i < setBitNumbers.size(); i++)
    {
        first_number = first_number ^ setBitNumbers[i];
    }
    int second_number = res ^ first_number;

    cout << first_number << " " << second_number;
}
int main()
{
    int a[] = {1, 2, 3, 1, 4, 5, 3, 5};
    PrintTheUniqueNumbers(a, 8);
    return 0;
}