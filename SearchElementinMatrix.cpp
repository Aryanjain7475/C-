#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m,x;
    cin >>n>>m>>x;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"Element Found \n";
    }
    else{
        cout<<"Element Not Found \n";
    }

    return 0;
}