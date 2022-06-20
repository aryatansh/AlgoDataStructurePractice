#include<iostream>

using namespace std;

int profit(int* wt,int* pr,int n,int c){
    if(n==0 || c==0){
        return 0;
    }
    int inc=0;
    int exc=0;
    if(wt[n-1]<c){
        inc=pr[n-1]+ profit(wt,pr,n-1,c-wt[n-1]);
    }
    exc=profit(wt,pr,n-1,c);
    int ans=max(inc,exc);
    return ans;
}

int main(){
    int weights[]={1,2,3,5};
    int prices[]={40,20,30,100};
    int n=4;
    int c=7;
    cout<<profit(weights,prices,n,c);
    return 0;
}