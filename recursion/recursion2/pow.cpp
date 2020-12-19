#include <iostream>

using namespace std;

int pow(int a, int n){
    if(n==0){
        return 1;
    }
    return a*pow(a,n-1);
}

int fast_pow(int a,int n){
    if(n==0){
        return 1;
    }
    int small_ans=fast_pow(a,n/2);
    small_ans*=small_ans;
    if(n&1){
        return small_ans*a;
    }
    return small_ans;
}

int main(){
    cout<<fast_pow(2,1)<<'\n';
    cout<<fast_pow(2,2)<<'\n';
    cout<<fast_pow(2,3)<<'\n';
    cout<<fast_pow(2,4)<<'\n';
    cout<<fast_pow(2,5)<<'\n';
    cout<<fast_pow(2,6)<<'\n';
    cout<<fast_pow(2,7)<<'\n';            
    return 0;

}