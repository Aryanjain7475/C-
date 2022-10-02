#include<iostream>
#include<math.h>
using namespace std;

int octalToDecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){ 
        int y=n%10;      
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;

    cout<<octalToDecimal(n)<<endl;

    return 0;
}