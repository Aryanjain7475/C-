#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    
    return fib(n-1)+fib(n-2);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a;
    cin >>a;
    cout<<fib(a);

    return 0;
} 