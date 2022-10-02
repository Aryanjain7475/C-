#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void sieveprime(int n){
    int prime[100]={0};

    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<endl;
        }
    }cout<<endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n ;
    cin>>n;
    sieveprime(n);

    return 0;
}