//ComputeParityOfWord
//The parity of a binary word is 1 if the number of 1s in the word is odd;otherwise its is 0
//The parity of 1011 is 1
//The parity of 10001000 is 0

#include <iostream>
using namespace std;

int count_optimized(int x)
{
    int count = 0;
    while (n > 0)
    {
        //Removing first occurence of 1 from the right
        n = n & (n - 1);
        count++;
    }
    return count % 2;
}
int count(int x)
{
    int count = 0;
    while (x > 0)
    {
        count += x & 1;
        x = x >> 1;
    }
    return count % 2;
}
int main()
{
}