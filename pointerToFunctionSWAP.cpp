#include<iostream>
#include<math.h>
using namespace std;

void swap(int *a ,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a=1;
    int b=4;

    int*aptr=&a;
    int*bptr=&b;
    
    swap(aptr,bptr);
    cout<<a<<" "<<b<<endl;

    return 0;
}