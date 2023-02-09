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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vll v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
        }
        ll ans=0,i=0;
        while(i<n)
        {
            while(!v[i] && i<n)i++;
            if(i>=n)break;
            while(v[i] && i<n)i++;
            ans++;
            if(i>=n)break;
        }
        if(ans<2)cout<<ans<<endl;
        else cout<<2<<endl;
    }
}

