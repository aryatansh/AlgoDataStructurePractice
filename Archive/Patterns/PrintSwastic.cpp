// Sample Input
// 7
// Sample Output
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *

#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    cin >> input;
    for (int i = 1; i <= input; i++)
    {
        if (i == 1)
        {
            cout << "*";
            for (int j = 2; j <= (input / 2); j++)
            {
                cout << " ";
            }
            for (int j = (input / 2) + 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else if (i == input)
        {
            for (int j = 1; j <= (input / 2) + 1; j++)
            {
                cout << "*";
            }
            for (int j = (input / 2) + 2; j < input; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        else if (i <= input / 2)
        {
            cout << "*";
            for (int j = 2; j <= (input / 2); j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        else if (i == (input / 2) + 1)
        {
            for (int j = 1; j <= input; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int j = 1; j <= (input / 2); j++)
            {
                cout << " ";
            }
            cout << "*";
            for (int j = (input / 2) + 2; j < input; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}