#include <iostream>

#define int long long

using namespace std;


//Iterative
int fact_itr(int x){
    int factorial_x=1;
    for (int i = 2; i <= x; i++)
    {
        factorial_x*=i;
    }
    return factorial_x;
    
}

int fact_rec(int x){
    if(x==1 || x==2){
        return x;
    }
    return x*fact_itr(x-1);
}


//Revursive

int_fast32_t  main(){
    cout<<'\n';
    int x=19;
    int y=21;
    int z=24;
    int a=26;
    int b=3;
    cout<<"Iterative for: "<<x<<" is "<<fact_itr(x);
    cout<<"Recursive for: "<<x<<" is "<<fact_rec(x);

    cout<<'\n';

    cout<<"Iterative for: "<<y<<" is "<<fact_itr(y);
    cout<<"Recursive for: "<<y<<" is "<<fact_rec(y);

    cout<<'\n';

    cout<<"Iterative for: "<<z<<" is "<<fact_itr(z);
    cout<<"Recursive for: "<<z<<" is "<<fact_rec(z);


    cout<<'\n';
    cout<<"Iterative for: "<<a<<" is "<<fact_itr(a);
    cout<<"Recursive for: "<<a<<" is "<<fact_rec(a);


    cout<<'\n';
    cout<<"Iterative for: "<<b<<" is "<<fact_itr(b);
    cout<<"Recursive for: "<<b<<" is "<<fact_rec(b);

    
    
    
    
    return 0;
}