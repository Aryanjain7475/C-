#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void reverse(string s){
    if (s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0]<<" ";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    reverse("binod");

    return 0;
} 