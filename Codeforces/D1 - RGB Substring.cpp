#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
//using namespace __gnu_pbds;
 
#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pi pair<int,int>
#define pll pair<long long>
#define pqll priority_queue<long long>
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

//const ll mod=998244353;

void solve();

int main()
{
    fastIO;
    solve();
}

void solve() {
    ll q; cin>>q;
    while(q--) {
        ll n,k; cin>>n>>k;
        string s; cin>>s;
        ll ans=INT_MAX;
        string t="RGB";
        for(ll i=0;i<n-k+1;i++) {
            for(ll offset=0;offset<3;offset++) {
                ll cur=0;
                for(ll pos=0;pos<k;pos++) {
                    if(s[i+pos]!=t[(offset+pos)%3]) cur++;
                }
                ans=min(ans,cur);
            }
        }
        cout<<ans<<endl;
    }
}


