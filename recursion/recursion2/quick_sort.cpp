#include <iostream>

using namespace std;


int partition(int *arr,int s, int e){
    int i=s-1;
    int j=s;
    int pivot=arr[e];
    while (j!=e)
    {
        if(arr[j]<=pivot){
            i=i+1;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quick_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int m=partition(arr,s,e);
    quick_sort(arr,s,m-1);
    quick_sort(arr,m+1,e);
}


int main(){
    int arr[]={2,7,8,6,1,5,4};
    int n=sizeof(arr)/sizeof(int);
    quick_sort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}