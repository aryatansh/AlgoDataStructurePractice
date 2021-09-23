// Define the weight of a nonnegative integer x to be the number of bits that are set to 1 in its binary representation.For example, since 92 in base - 2 equals(1011100), the weight of 92 is 4

// Write a program which takes as input a nonnegative integer x and returns a number y which is not equal to x, but has the same weight as x and their difference, |y-x| is as small as possible. Assume x is not 0,or all1s, For example, if x=6,return 5

#include <iostream>

using namespace std;

int main()
{
    long long n = 0;
    cin >> n;
    for (int i = 0; i < 63; i++)
    {
        if (((n >> i) & 1) != ((n >> (i + 1)) & 1))
        {
            int mask = (1 << i) | (1 << (i + 1));
            n = n ^ mask;
            break;
        }
    }
    cout << n;

    return 0;
}