#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string a="bbbbbbghu";
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }

    for(int i=0;i<a.size();i++){
        freq[a[i]-'a']++;
    }

    char ans = 'a';
    int maxFreq = 0;
    for(int i=0;i<26;i++){
        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            ans = i + 'a'; 
        }
    }

    cout<<maxFreq<<" "<<ans<<endl;

    return 0;
}