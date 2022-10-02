#include<bits/stdc++.h>
#include<climits>
#include<math.h>
using namespace std;

bool pairSum(int arr[],int n,int k){
    int low =0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            cout<<"Pair Sum : "<<arr[low]<<" "<<arr[high]<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){

    int k=31;
    int arr[]={2,4,7,11,14,16,20,21};

    cout<<pairSum(arr,8,k)<<endl;

    return 0;
}