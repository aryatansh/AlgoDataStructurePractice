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

int32_t main(){
    spell(2048);
    cout<<"\n";
    return 0;
}