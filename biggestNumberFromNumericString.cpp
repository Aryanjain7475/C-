#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string a="64868463682";
    sort(a.begin(),a.end(),greater<int>());
    cout<<a<<endl;

    return 0;
}