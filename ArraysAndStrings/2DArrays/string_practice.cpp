#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x = 0;
    cin >> x;
    char a[x][10];
    cin.get();
    for (int i = 0; i < x; i++)
    {
        cin.getline(a[i], 1000);
    }
    for (int i = 0; i < x; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}