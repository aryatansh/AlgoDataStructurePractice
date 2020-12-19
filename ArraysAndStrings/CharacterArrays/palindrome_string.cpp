#include <iostream>

using namespace std;

bool is_palindrome(char *a)
{
    int j = strlen(a) - 1;
    int i = 0;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[1000];
    cin.getline(arr, 1000);
    if (is_palindrome(arr))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }
    return 0;
}
