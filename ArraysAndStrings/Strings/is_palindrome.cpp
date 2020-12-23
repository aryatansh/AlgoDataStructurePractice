// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

// Input Format
// Enter a number N , add N more numbers

// Constraints
// None

// Output Format
// Display the Boolean result

// Sample Input
// 4
// 1
// 2
// 2
// 1
// Sample Output
// true

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    bool is_palindrome = true;
    for (int i = 0; i < count; i++)
    {
        if (arr[i] == arr[count - 1 - i])
        {
            continue;
        }
        else
        {
            is_palindrome = false;
            cout << "false";
            break;
        }
    }
    if (is_palindrome)
    {
        cout << true;
    }

    return 0;
}