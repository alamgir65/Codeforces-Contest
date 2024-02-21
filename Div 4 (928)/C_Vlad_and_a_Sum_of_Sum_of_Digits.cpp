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
const int N = 2e5 + 10;
map<ll, ll> mp;
ll digitSum(ll n){
    ll sum = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        sum += (num[i] - '0');
    }
    return sum;
}
void gen() {
    ll sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += digitSum(i);
        mp[i] = sum;
    }
}
void solve(){
    ll n;
    cin >> n;
    if (n <= 9) {
        int x=(n*(n+1))/2;
        out(x)
        return;
    }

    cout << mp[n] << endl;
}
love{
    Alamgir
    gen();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}