// One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

// Input Format
// A single line contains the string.

// Constraints
// |S|<=1000

// Output Format
// Print words present in the string, in the order in which it appears in the string.

// Sample Input
// IAmACompetitiveProgrammer
// Sample Output
// I
// Am
// A
// Competitive
// Programmer
// Explanation
// There are 5 words in the string.
#include <iostream>

using namespace std;

int main()

{
    string s;
    cin >> s;
    string t = "";
    int i = 0;
    bool x = false;
    while (i < s.size())
    {
        if (s[i] > 91)
        {
            i++;
            continue;
        }
        else
        {
            int j = i + 1;
            while (s[j] > 91)
            {
                j++;
            }
            cout << s.substr(i, j - i) << endl;
            i++;
        }
    }

    return 0;
}