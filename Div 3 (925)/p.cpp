#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin>>n;
    vector<int> a(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    int x=sum/n;
    long long tmp=0;
    bool flag=true;
    if(sum%n != 0) flag=false;
    for(int i=0;i<n;i++){
        tmp += a[i];
        if((tmp/(i+1)) < x){
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int main()
{
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}