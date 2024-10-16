#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<ll,ll> pll;
typedef pair<int,int> pi;
typedef priority_queue<ll> pqll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;


void solve();


int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
#endif
    //fastIO;
    int t; cin>>t;
    while(t--) solve();
}

void solve() {
    int n; cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        m[x]++;
    }
    if(n%2) cout<<"NO"<<endl;
    else {
        for(auto x:m) {
            if(x.second%2) {
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
    }
}
