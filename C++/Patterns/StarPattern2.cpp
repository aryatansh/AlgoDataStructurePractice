//Input
//5

//Output
//1****
//12***
//123**
//1234*
//12345
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i + 1; j <= a; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}