#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int numberOfInput = 0;
    char largest_char_arr[1000];
    char current_char_arr[1000];
    int max = strlen(largest_char_arr);
    cin >> numberOfInput;
    cin.get();
    for (int i = 0; i < numberOfInput; i++)
    {
        cin.getline(current_char_arr, 1000);
        int current_size = strlen(current_char_arr);
        if (current_size > max)
        {
            strcpy(largest_char_arr, current_char_arr);
            max = current_size;
        }
    }
    cout << largest_char_arr;

    char arr[1000];
}
