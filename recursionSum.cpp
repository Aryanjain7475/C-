#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }

    int prevsum= sum(n-1);
    
    return n+prevsum;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a;
    cin >>a;
    cout<<sum(a);

    return 0;
}