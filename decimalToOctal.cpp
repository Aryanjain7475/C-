#include<iostream>
#include<math.h>
using namespace std;

int decimalToOctal(int n){
    int ans = 0;
    int x  = 1;

    while(x<=n){
        x*=8;
    }
    x/=8;

    while(x>0){
        int lastDigit = n/x;
        n-=lastDigit*x;
        x/=8;
        ans=ans*10+lastDigit;
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

    cout<<decimalToOctal(n)<<endl;

    return 0;
}