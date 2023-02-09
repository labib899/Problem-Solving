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


int main()
{
    fastIO;
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    sort(v.begin(),v.end());
    ll ans=-1;
    for(ll i=0;i<n;i++)
    {
        if(ans<=v[i].second)ans=v[i].second;
        else ans=v[i].first;
    }
    cout<<ans<<endl;
}


