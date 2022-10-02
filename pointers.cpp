#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    //Normal
    
    int a=10;
    int* aptr=&a;

    cout<<*aptr<<endl;
    *aptr = 20;
    cout<<a<<endl;

    //Address of int take byte 4
    int b=10;
    int* bptr=&b;
    cout<<bptr<<endl;
    bptr++;
    cout<<bptr<<endl;

    //Array - Pointer
    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl;
    int*ptr=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        ptr++;
    }

    return 0;
}