// Take the following as input.

// A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

// Input Format
// Character (ch)

// Constraints
// No constraints

// Output Format
// 'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

// Sample Input
// s
// Sample Output
// L
// Explanation
// Anyone can Do it using Ascii codes. I dare you - "Try to not use ascii codes." ;)

#include <iostream>

using namespace std;

int main()
{
    char x;
    cin >> x;
    if (x >= 65 && x <= 90)
    {
        cout << 'U';
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "L";
    }
    else
    {
        cout << "I";
    }
    return 0;
}