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
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0,maxLen=0;
    int st=0,maxst=0;

    while(1){ 

        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
            else{}
            currLen=0;
            st = i+1;
        }
        else{}

        currLen++;

        if(arr[i]=='\0'){
            break;
        }
        else{}

        i++;
       
    }

    cout<<maxLen-1<<endl;

    for(int i=0;i<maxLen-1;i++){
        cout<<arr[i+maxst];
    }
    

    return 0;
}