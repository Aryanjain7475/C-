#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;

    cout<<arr<<endl;
    cout<<arr[3]<<endl;
    
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}