#include <iostream>

using namespace std;

int main()
{
    int row = 0;
    cin >> row;
    int space_count = row - 1;
    int number_count = 1;
    int space_count2 = 0;
    int number_count2 = 0;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= space_count; j++)
        {
            cout << " ";
        }
        for (int j = number_count; j > 0; j--)
        {
            cout << j;
        }
        if (i <= row / 2)
        {
            number_count++;
            space_count = space_count - 2;
        }
        else
        {
            number_count--;
            space_count = space_count + 2;
        }
        for (int j = 0; j < 2 * space_count2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= number_count2; j++)
        {
            cout << j;
        }
        if (i <= row / 2)
        {
            number_count2 = number_count2 + 1;
            space_count2 = space_count2 + 1;
        }
        else
        {
            number_count2 = number_count2 - 1;
            space_count2 = space_count2 - 1;
        }
        cout << endl;
    }
    return 0;
}
