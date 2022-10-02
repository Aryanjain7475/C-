#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int pow(int n,int p){
    if(p==0){
        return 1;
    }

    int prevpow= pow(n,p-1);
    return n*prevpow;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a ,b;
    cin >>a>>b;
    cout<<pow(a,b)<<endl;;

    return 0;
}