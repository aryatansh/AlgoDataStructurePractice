// Write two functions to Print first N numbers in
// - Increasing order 
// - Decreasing order
// ---------------------------------



#include <iostream>

using namespace std;

void dec(int n){
    cout<<n;
    if(n>0){
    dec(n-1);
    }
}

void inc(int n){
    if(n>0){
    inc(n-1);
    }
    cout<<n;
 
}
int main(){
    int x;
    cin>>x;
    dec(x);
    cout<<endl;
    inc(x);
    return 0;

}