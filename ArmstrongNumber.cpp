#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >>n;
    
    int sum=0;
    int originaln=n;

    while(n>0){
        int lastDigit = n%10;
        sum+=round(pow(lastDigit,3));
        n=n/10;
    }

    if(originaln==sum){
        cout<<"Armstrong Number"<<endl;
    }
    else{
        cout<<"Not an Armstrong Number"<<endl;
    }

    return 0;
}