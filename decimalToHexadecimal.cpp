#include<iostream>
#include<math.h>
using namespace std;

string decimalToHexadecimal(int n){
    string ans = "";
    int x  = 1;

    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0){
        int lastDigit = n/x;
        n-=lastDigit*x;
        x/=16;
        if (lastDigit<=9){
            ans = ans + to_string(lastDigit);
        } 
        else{
            char c = 'A' + lastDigit -10;
            ans.push_back(c);
        }
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

    cout<<decimalToHexadecimal(n)<<endl;

    return 0;
}