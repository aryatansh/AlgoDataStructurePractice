// Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size 1 x m . A tile can either be placed horizontally or vertically.

// Input Format
// First line of input contains an integer T denoting the number of test cases. Then T test cases follow.
// The first line of each test case contains two integers N and M.

// Constraints
// 1 <= T<= 1000
// 1 <= N,M <= 100000

// Output Format
// Print answer for every test case in a new line modulo 10^9+7.

// Sample Input
// 2
// 2 3
// 4 4
// Sample Output
// 1
// 2


#include<iostream>
#include<vector>

int mod=1e9+7;
using namespace std;
int calculateTiling(int m,int n,vector<int> &dp){
	if(n<m){
		return 1;
	}
    if(dp[n]!=-1){
        return dp[n];
    }
    
    int verticalTiling= calculateTiling(m,n-1,dp)%mod;
    int horizontalTiling=calculateTiling(m,n-m,dp)%mod;
    dp[n]=(verticalTiling+horizontalTiling)%mod;
     return dp[n];

}
int main() {
	int t;
    cin >> t;
    while(t--)
    {

        int n, m;
        cin >> n >> m;
        vector<int> dp(n+1,-1);
        cout<<endl;
        cout<<calculateTiling(m, n,dp)<<endl;
    }
 
    return 0;
}
