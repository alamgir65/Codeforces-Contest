#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
       int n; cin>>n;
    string s; cin>>s;
    int past=0,last=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            past=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            last=i;
            break;
        }
    }
    int ans=last-past+1;
    out(ans)
    }
    return 0;
}