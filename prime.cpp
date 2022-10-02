#include<iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime"<<endl;
    }
    

    return 0;
}