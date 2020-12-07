#include <iostream>

using namespace std;

void remove_consecutive(char arr[])
{
    int size = strlen(arr);
    int i = 0;
    int j = 1;
    while (j <= size)
    {
        while (arr[i] == arr[j])
        {
            j = j + 1;
        }
        i = i + 1;
        arr[i] = arr[j];
        j = j + 1;
    }

    arr[i + 1] = '\0';
}

int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    remove_consecutive(arr);
    cout << arr;
}
