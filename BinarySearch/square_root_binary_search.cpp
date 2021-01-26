//This program explains how to find square root of a number using binary search

#include <iostream>

using namespace std;

float square_root(int x, int p)
{
    float sqrt = 0;
    int s = 0;
    int e = x;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid * mid == x)
        {
            sqrt = x;
            return sqrt;
        }
        else if (mid * mid > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
            sqrt = mid;
        }
    }

    float inc = 0.1;
    for (int i = 0; i < p; i++)
    {
        while (sqrt * sqrt < x)
        {
            sqrt = sqrt + inc;
        }
        sqrt = sqrt - inc;
        inc = inc / 10;
    }
    return sqrt;
}

int main()
{
    int x = 0;
    cin >> x;
    //Input to find precision of the square root
    int p = 0;
    cin >> p;
    cout << square_root(x, p);
    return 0;
}