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


int main()
{
    fastIO;
    ll t; cin>>t;
    while(t--)
    {
        ll n,m; cin>>n>>m;
        vll v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            if(m>=v[i])m-=v[i];
            else ans+=v[i]-m,m=0;
        }
        cout<<ans<<endl;
    }
}

