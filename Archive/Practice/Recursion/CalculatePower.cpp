#include <iostream>
#include <cmath>

using namespace std;

int calculatePow(int a, int i)
{
    if (i == 0)
    {
        return 1;
    }
    return calculatePow(a, i - 1) * a;
}

int main()
{
    cout << pow(2, 10) << endl;
    cout << pow(2, 10);
    return 0;
}

//5