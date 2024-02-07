#include <iostream>
#include <vector>
#include <deque>
#include <set>
#include <algorithm>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define cyes cout<<"Yes"<<endl
#define cno cout<<"No"<<endl
#define all(x) x.begin(), x.end()
#define nl cout<<endl
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n'
#define out2(x,y) cout << x << " " << y << '\n'
#define vii vector<int>
#define vll vector<ll>
#define dqii deque<int>
#define dqll deque<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0)

template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vii a(n), b(m);
    set<int> st1, st2;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        st1.insert(a[i]);
    }
    for (int j = 0; j < m; j++) {
        cin >> b[j];
        st2.insert(b[j]);
    }
    vii tmp1, tmp2;
    // set<int> tm1, tm2;
    for (int i = 1; i <= k; i++) {
        if (st1.find(i) == st1.end()) {
            tmp1.push_back(i);
            // tm1.insert(i);
        }
        if (st2.find(i) == st2.end()) {
            tmp2.push_back(i);
            // tm2.insert(i);
        }
    }
    bool flag = true;
    for (int i = 0; i < tmp1.size(); i++) {
        if (st2.find(tmp1[i]) == st2.end()) {
            flag = false;
        }
    }
    for (int i = 0; i < tmp2.size(); i++) {
        if (st1.find(tmp2[i]) == st1.end()) {
            flag = false;
        }
    }
    if (tmp1.size() > (k / 2) || tmp2.size() > (k / 2)) {
        flag = false;
    }

    if (flag) yes;
    else no;
}

love {
    Alamgir;
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
