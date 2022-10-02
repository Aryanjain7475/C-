 #include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int numberOfOne(int n){
    int count =0;
    while(n){
        n = n & (n-1);
        count ++;
    }
    return count;
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

 int n = 19;
 cout<<numberOfOne(n)<<endl;

    return 0;
}