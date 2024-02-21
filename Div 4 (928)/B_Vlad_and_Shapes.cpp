#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define dqii deque<int> 
#define dqll deque<ll> 
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int n; cin>>n;
    // int a[n][n];
    vector<string> a;
    for(int i=0;i<n;i++){
        string s; cin>>s;
        a.push_back(s);
    }
    int cnt=0;
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='1'){
                cnt++;
            }
        }
        mx=max(mx,cnt);
        cnt=0;
    }
    string t;
    while(mx--){
        t += '1';
    }
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i].find('1') == a[i].npos) continue;
        if(a[i].find(t) == a[i].npos){
            flag=false;
        }
    }
    if(flag) cout<<"SQUARE"<<endl;
    else cout<<"TRIANGLE"<<endl;
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}