// Victor has a 24-hour clock that shows the time in the format "HH:MM" (00 ≤ HH ≤ 23, 00 ≤ MM ≤ 59). He looks at the clock every 𝑥 minutes, and the clock is currently showing time 𝑠.

// How many different palindromes will Victor see in total after looking at the clock every 𝑥 minutes, the first time being at time 𝑠?

// For example, if the clock starts out as 03:12 and Victor looks at the clock every 360 minutes (i.e. every 6 hours), then he will see the times 03:12, 09:12, 15:12, 21:12, 03:12, and the times will continue to repeat. Here the time 21:12 is the only palindrome he will ever see, so the answer is 1.

// A palindrome is a string that reads the same backward as forward. For example, the times 12:21, 05:50, 11:11 are palindromes but 13:13, 22:10, 02:22 are not.

// Input
// The first line of the input contains an integer 𝑡 (1≤𝑡≤100) — the number of test cases. The description of each test case follows.

// The only line of each test case contains a string 𝑠 of length 5 with the format "HH:MM" where "HH" is from "00" to "23" and "MM" is from "00" to "59" (both "HH" and "MM" have exactly two digits) and an integer 𝑥 (1≤𝑥≤1440) — the number of minutes Victor takes to look again at the clock.

// Output
// For each test case, output a single integer — the number of different palindromes Victor will see if he looks at the clock every 𝑥 minutes starting from time 𝑠.

// Example
// inputCopy
// 6
// 03:12 360
// 00:00 1
// 13:22 2
// 15:15 10
// 11:11 1440
// 22:30 27
// outputCopy
// 1
// 16
// 10
// 0
// 1
// 1
// Note
// The first test case is explained in the statement.

#include<iostream>
#include <time.h>
   
using namespace std;
int countPalindromes(string t,string diff){

    strptime(t.c_str(),"%H:%M",&tm);
    time_t time = mktime(&tm);
    cout<<time<<endl;
    
}
int main(){
 int t=0;
 cin>>t;
 cout<<endl;
 for (int i = 0; i < t; i++)
 {
    struct std::tm tm;
    string time__,diff;
    cin>>time__>>diff;
    //time__.append(":00");
    cout<<time__<<" "<<diff<<" ";
   
 }
 
 return 0;
}