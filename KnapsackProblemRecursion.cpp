//thieve bag weight ke jitne me maximum value wala items.
#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[],int wt[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        knapsack(value,wt,n-1,W);
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W));
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int wt[]={10,20,30,50};
    int value[]={100,50,150,1500};
    int W=50;
    cout<<knapsack(value,wt,4,W)<<endl;

    return 0;
} 