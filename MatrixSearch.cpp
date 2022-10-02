#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,m;
    cin>>n>>m;
    int t;
    cin>>t;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int r=0,c=m-1;
    bool found=false;
    while(r<n && c>=0){
        if(a[r][c]==t){
            found=true;
            break;
        }
        if(t<a[r][c]){
            c--;
        }
        if(t>a[r][c]){
            r++;
        }
    }
    if(found==true){
        cout<<"Element Found !"<<endl;
    }
    else{
        cout<<"Element Not Found !"<<endl;
    }

    return 0;
}