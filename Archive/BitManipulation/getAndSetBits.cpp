#include <iostream>
using namespace std;
int getBit(int n, int i){
          int mask=(1<<i);
          return (n&mask)>0 ? 1:0;
}
void setBit(int &n, int i){
        int mask= (1<<i);
        n=n|mask;
}
void clearBit(int &n,int i){
        int mask= ~(1<<i);
        n=n&mask;
        
}
void updateBit(int &n,int i,int v){
   clearBit(n,i);
   n=n|(v<<i);
}
int clearLastIBits(int &n, int i){
     int mask= (-1<<i);
     return n & mask;
}
int clearRangeOfBits(int &n, int i,int j){
     int a=(~0)<<j+1;
     int b=(1<<i)-1;
     int mask = a|b;
     return n & mask;
}
int ReplaceBitsInNByM(int n, int m, int i , int j){
    int n_=clearRangeOfBits(n,i,j);
    int mask=m<<i;
    return n_|mask;
}
int main(){
    int n=15;
    int m=2;
    int i=1;
    int j=3; 
    cout<<ReplaceBitsInNByM(n,m,i,j);
}