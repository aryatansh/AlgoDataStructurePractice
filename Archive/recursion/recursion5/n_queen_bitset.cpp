#include<iostream>
using namespace std;


bitset<30> col,d1,d2;

void solve(int r, int n,int &ans){
    if(r==n){
        ans++;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if(!col[i] && !d1[r-i+n-1] && !d2[r+i]){
            col[i] = d1[r-i+n-1] = d2[r+i]=1;
            solve(r+1,n,ans);
             col[i] = d1[r-i+n-1] = d2[r+i]=0;
        }
    }
    
}
int main(){

    bitset<30> b;
    
}