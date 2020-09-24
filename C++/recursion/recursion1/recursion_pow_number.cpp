//  Write a function to check if array is sorted

#include <iostream>

using namespace std;


int calcPow(int num, int pow){
    if(pow==1){
        return num;
    }
    if (pow==0){
        return 1;
    }
    return num*calcPow(num,pow-1);
}

int main(){
int num=2;
int pow=4;
 cout<<calcPow(num,pow);
}