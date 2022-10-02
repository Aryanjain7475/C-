#include<bits/stdc++.h>
using namespace std;

void Swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfSort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            Swap(arr,low,mid);
            low++;mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            Swap(arr,mid,high);
            high--;
        }
    }
}                              

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int arr[]={1,2,0,2,1,0,0,1,2};
    dnfSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}