#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fastIO ios::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;

void solve();

int main()
{
    fastIO;
    solve();
}

void solve()
{
    ll n,m; cin>>n>>m;
    vll v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    vll diff1(n+1),diff2(n+1),psum1(n+1,0),psum2(n+1,0);
    for(int i=2;i<=n;i++)
    {
        diff1[i]=v[i-1]-v[i];
        if(diff1[i]>0) psum1[i]=psum1[i-1]+diff1[i];
        else psum1[i]=psum1[i-1];
    }
    for(int j=n-1;j>=1;j--)
    {
        diff2[j]=v[j+1]-v[j];
        if(diff2[j]>0) psum2[j]=psum2[j+1]+diff2[j];
        else psum2[j]=psum2[j+1];
    }
    /*for(auto x:diff1)cout<<x<<" ";
    cout<<endl;
    for(auto x:diff2) cout<<x<<" ";
    cout<<endl;
    for(auto x:psum1)cout<<x<<" ";
    cout<<endl;
    for(auto x:psum2) cout<<x<<" ";
    cout<<endl;*/
    for(ll i=1;i<=m;i++)
    {
        ll a,b; cin>>a>>b;
        if(a<=b) cout<<psum1[b]-psum1[a]<<endl;
        else cout<<psum2[b]-psum2[a]<<endl;
    }
}

