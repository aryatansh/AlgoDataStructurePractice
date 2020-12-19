//Create a character array
//Read data in a character array with newline

#include <iostream>
#include <cstring>
using namespace std;

void getline(char *arr, int n)
{
    int i = 0;
    char ch = cin.get();
    while (ch != '\n')
    {
        arr[i] = ch;
        i = i + 1;
        if (i == n - 1)
        {
            break;
        }
        ch = cin.get();
    }
    arr[i] = '\0';
    int j = 0;
    while (arr[j] != '\0')
    {
        cout << arr[j];
        j++;
    }
    cout << endl;
}

int main()
{
    char arr[1000];
    // getLine(arr, 1000);
    cin.getline(arr, 1000, '@');
    cout << arr;
    return 0;
}