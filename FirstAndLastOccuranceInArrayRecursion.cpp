#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int first(int arr[],int n,int key,int i){   //i for position
    if(i==n){
        return -1;
    }
    
    if(arr[i]==key){
        return i;
    }
    return first(arr,n,key,i+1);
}

int last(int arr[],int n,int key,int i){
    if(i==n){
        return -1;
    }
    int restArray = last(arr,n,key,i+1);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a[]={2,1,3,1,3,4};
    cout<<first(a,6,1,0)<<endl;
    cout<<last(a,6,1,0)<<endl;;

    return 0;
} 