#include <iostream>

#define int long long

using namespace std;


//Numbers to Spelling
//2048 -> Two Zero Four Eight



string spellArray[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
void spell(int num){
    if(num==0){
        return;    
    }
    spell(num/10);
    int digit=num%10;
    cout<<spellArray[digit]<<" ";
}

int stringToInteger(string number,int n){
    if(n==0){
        return 0;
    }
    int digit=number[n-1]-'0';
    int a=stringToInteger(number,n-1);
    return a*10+digit;
}

int32_t main(){
    int x=stringToInteger("2048",4);
    cout<<x<<"\n"<<x+5;
    return 0;
}