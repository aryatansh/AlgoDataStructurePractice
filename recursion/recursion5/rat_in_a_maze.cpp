//Given a m * n matrix, with some cells as blocked you have to 
//1) Find Path from source to destination
//2) Count the number of path from source to destination
//3) Print all possible paths
//Given the rat can only move forward and down.

#include<iostream>

using namespace std;

bool raatInMaze(char maze[10][10],int sol[][10],int i,int j,int m,int n){
    if(i==m && j==n){
        sol[m][n]=1;
        for (int i = 0; i <= m; i++)
        {
            for (int j=0;j<=n; j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
        
    }
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j]=='x'){
        return false;
    }
    sol[i][j]=1;
    bool rightSuccess=raatInMaze(maze,sol,i,j+1,m,n);
    bool downSuccess=raatInMaze(maze,sol,i+1,j,m,n);

    sol[i][j]=0;

    if(rightSuccess || downSuccess){
        return true;
    }
    return false;

}


int main(){
    char maze[10][10]={ "0000",
                        "00x0",
                        "000x",
                        "0x00"};
    int sol[10][10]={0};
    int m=4,n=4;
    bool ans=raatInMaze(maze,sol,0,0,m-1,n-1);
    cout<<ans;

    return 0;
}