#include <iostream>
using namespace std;

void bubble_sort(int *a, int n){
    if(n==0 ||n==1){
        return;
    }
    for (int i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1]){
            swap(a[i],a[i+1]);
        }
    }
    return bubble_sort(a,n-1);
    
}

void bubble_sort_full_recursive(int *a,int n, int j){
    if(n==0 || n==1){
        return;
    }
    if(j==n-1){
        return bubble_sort_full_recursive(a,n-1,0);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    return bubble_sort_full_recursive(a,n,j+1);
    
}

int main(){
    int a[]={5,3,1,2,4};
    bubble_sort_full_recursive(a,sizeof(a)/sizeof(int),0);
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
    }
    
    return 0;
}