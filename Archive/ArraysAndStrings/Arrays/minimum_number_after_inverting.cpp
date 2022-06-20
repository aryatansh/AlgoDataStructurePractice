// Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

// Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.

// Input Format
// The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.

// Constraints
// x <= 100000000000000000

// Output Format
// Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.

// Sample Input
// 4545
// Sample Output
// 4444
// Explanation
// There are many numbers form after inverting the digit. For minimum number, check if inverting digit is less than or greater than the original digit. If it is less, then invert it otherwise leave it.

#include <iostream>
#include <string>
using namespace std;

string str1;
//string str2;

int main()
{
    cin >> str1;
    int len = str1.length();
    //   for(int i = 0 ; i < len - 1 ; i++)
    //   {
    //       int minx = min(str1[i] , str1[2]);
    //   }
    for (int i = 1; i < len; i++)
    {
        if (str1[i] >= '5')
        {
            str1[i] = '9' - str1[i] + '0';
        }
    }
    if (str1[0] != '9' && str1[0] >= '5')
        str1[0] = '9' - str1[0] + '0';
    cout << str1 << endl;
    return 0;
}
