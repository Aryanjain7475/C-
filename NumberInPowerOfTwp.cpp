#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

bool ispowerof2(int n){
    return(n && !(n & n-1));
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

 int n = 6;
 cout<<ispowerof2(n)<<endl;

    return 0;
}