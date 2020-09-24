#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int arr[]={1,11,10,9,100};
    int n=sizeof(arr)/sizeof(int);
    //Search --> find  
    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
    cout<<index<<"\n";
    if(index==n){
        cout<<key<<" Key is not present";
    }
    cout<<it<<endl; 
}