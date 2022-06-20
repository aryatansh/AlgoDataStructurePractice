#include <iostream>

using namespace std;

//iterative
bool isPalindrome(string x){
    int size_string=x.size();
    for (int i = 0; i < size_string/2; i++)
    {
        if(x[i]!=x[size_string-i-1]){
            return false;
        }
    }
    return true;
}

//recursive
bool is_palindrome_recursive(string x,int i){
    
    int size_string=x.size();
    
    if(x[i]!=x[size_string-i-1]){
        return false;
    }
    if(i==size_string/2){
        return true;
    }
    is_palindrome_recursive(x,i+1);
    return true;
}

int main(){
    int x=8668;
    string y=to_string(x);
    cout<<"Iterative output: "<<to_string(isPalindrome(y))<<"\n";
    cout<<"Recursive output: "<<is_palindrome_recursive(y,0);
    
    return 0;
}