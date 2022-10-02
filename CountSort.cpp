#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n){
    int k = arr[0];
    for(int i=0;i<n;i++){
        k = max(k,arr[i]);
    }

    int count[k+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];  //pre decrement kyuki pehle decrease karna hai phir output array me value dalna hai
    }  

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

    return ;
}                                       

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int arr[]={1,3,2,3,4,1,6,4,3,10};
    countSort(arr,10);

    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}