#include <iostream>

using namespace std;

void move(int n, char source, char dest, char helper){
    if(n==0){
        return;
    }
    move(n-1,source,helper,dest);
    cout<<"Shift "<<n<< " from "<<source<<" to "<< dest<<endl;
    move(n-1,helper,dest,source);
}
int main(){
    move(3,'A','C','B');
    return 0;
}