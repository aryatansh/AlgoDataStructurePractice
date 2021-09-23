// Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.

// Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.

// Example 1:

// Input: num1 = "2", num2 = "3"
// Output: "6"
// Example 2:

// Input: num1 = "123", num2 = "456"
// Output: "56088"

// Constraints:

// 1 <= num1.length, num2.length <= 200
// num1 and num2 consist of digits only.
// Both num1 and num2 do not contain any leading zero, except the number 0 itself.

class Solution
{
public:
    string multiply(string num1, string num2)
    {

        string sum(num1.size() + num2.size(), '0');

        for (int i = num1.size() - 1; 0 <= i; --i)
        {
            int carry = 0;
            for (int j = num2.size() - 1; 0 <= j; --j)
            {
                int tmp = (sum[i + j + 1] - '0') + (num1[i] - '0') * (num2[j] - '0') + carry;
                sum[i + j + 1] = tmp % 10 + '0';
                carry = tmp / 10;
            }
            sum[i] += carry;
        }

        size_t startpos = sum.find_first_not_of("0");
        if (string::npos != startpos)
        {
            return sum.substr(startpos);
        }
        return "0";
    }
};
