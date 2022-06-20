#include <iostream>

using namespace std;

int main(){
    int arr[10]={0};
    int n=sizeof(arr)/sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    return 0;  
}