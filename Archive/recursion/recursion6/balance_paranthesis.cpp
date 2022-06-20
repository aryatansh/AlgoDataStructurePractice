// Given an integer 'n'. Print all the possible pairs of 'n' balanced parentheses.
// The output strings should be printed in the sorted order considering '(' has higher value than ')'.

// Input Format
// Single line containing an integral value 'n'.

// Constraints
// 1<=n<=11

// Output Format
// Print the balanced parentheses strings with every possible solution on new line.

// Sample Input
// 2
// Sample Output
// ()() 
// (()) 

#include <iostream>

using namespace std;

void balanced_brackets(char* bal_str,int n,int i,int open, int close){
    if(i==2*n){
        bal_str[i]='\0';
        cout<<bal_str<<endl;
        return;
    }
    if(open<n){
        bal_str[i]='(';
        balanced_brackets(bal_str,n,i+1,open+1,close);
    }
    if(close<open){
        bal_str[i]=')';
        balanced_brackets(bal_str,n,i+1,open,close+1);
    }

}

int main(){
    int i=0;
    cin>>i;
    char n[100];
    balanced_brackets(n,i,0,0,0);
    return 0;
}
