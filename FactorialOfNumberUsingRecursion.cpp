#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int fac(int n){
    if(n==0){
        return 1;
    }

    int prevfac = fac(n-1);
    return n*prevfac;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a ;
    cin >>a;
    cout<<fac(a);

    return 0;
}