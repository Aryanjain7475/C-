#include<bits/stdc++.h>
using namespace std;

int countPath(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countPath(n,i+1,j)+countPath(n,i,j+1);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    cout<<countPath(3,0,0)<<endl;

    return 0;
} 