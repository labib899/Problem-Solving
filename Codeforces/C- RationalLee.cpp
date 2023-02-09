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
    ll t; cin>>t;
    while(t--) {
        ll n,k; cin>>n>>k;
        vll num(n),w(k);
        for(ll i=0;i<n;i++) cin>>num[i];
        for(ll i=0;i<k;i++) cin>>w[i];
        sort(w.begin(),w.end());
        sort(num.begin(),num.end());
        /*for(auto &x:w) cout<<x<<" ";
        cout<<endl;
        for(auto &x:num) cout<<x<<" ";
        cout<<endl;*/
        ll ans=0,j=n-1;
        for(ll i=0;i<k;i++) {
            ans+=num[j]+num[j-w[i]+1];
            j--;
            if(w[i]==2)j--;
        }
        cout<<ans<<endl;
    }
}


