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
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
//const ll N=2e5+10;
//vll v(N,0);

int main()
{
    fastIO;
    ll n,q; cin>>n>>q;
    vll v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(v.rbegin(),v.rend());
    //reverse(v.begin()+1,v.end());
    for(ll i=1;i<n;i++)v[i]+=v[i-1];
    for(ll i=0;i<q;i++)
    {
        ll x,y;
        cin>>x>>y;
        if(x==y)cout<<v[x-1]<<endl;
        else cout<<v[x-1]-v[x-y-1]<<endl;
    }
    //for(auto &x:v)cout<<x<<" ";
}



