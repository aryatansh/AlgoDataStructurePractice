#include <iostream>
using namespace std;

int fibRec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibRec(n - 1) + fibRec(n - 2);
}
int main()
{
    cout << fibRec(1) << endl;
    cout << fibRec(2) << endl;
    cout << fibRec(3) << endl;
    cout << fibRec(4) << endl;
    cout << fibRec(5) << endl;
    cout << fibRec(6) << endl;
    cout << fibRec(10);
    return 0;
}