#include<iostream>
#include<vector>

using namespace std;
bool comparefn(const int &a,const int &b)
{   
    return a>b;
}

int main(){
    vector<int> a={1,2,3,4,5,6,7,8,9,10};
    sort(a.begin(),a.end(),comparefn);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    
    
    return 0;
}