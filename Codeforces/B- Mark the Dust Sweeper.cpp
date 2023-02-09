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
    ll t,n;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

void solve()
{
    ll n;
    cin>>n;
    bool flag=0;
    ll sum=0;
    for (ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        if(i==n-1) break;
        if(x) flag=1;
        if(x==0 && flag) sum++;
        sum+=x;
    }
    cout<<sum<<endl;
}

