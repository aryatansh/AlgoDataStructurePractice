#include <iostream>

using namespace std;

int merge(int *a,int s, int e){
    
    int i=s;
    int mid= (s+e)/2;
    int j=mid+1;
    int k=s;
    int temp[10000];
    int count=0;
    while (i<=mid and j<=e)
    {
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
                
                count+=mid-i+1;
        }
        
    }
    while (i<=mid)
        {
            temp[k++]=a[i++];
        }
    while (j<=e)
        {
            temp[k++]=a[j++];
        }
    for (int i = s; i <= e; i++)
    {
        a[i]=temp[i];
    }
    return count;
    
}
int inversion_count(int *a,int s,int e){
    if(s>=e){
        return 0;
    }
    int mid= (s+e)/2;
    int x=inversion_count(a,s,mid);
    int y=inversion_count(a,mid+1,e);
    int z=merge(a,s,e);
    int count=x+y+z;
    return count;
}
int main(){
    int arr[]={1,5,2,6,3,0};
    int size=sizeof(arr)/sizeof(int);
    cout<<inversion_count(arr,0,size-1);
    return 0;
}