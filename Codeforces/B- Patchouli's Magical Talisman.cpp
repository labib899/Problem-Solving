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

ll div(ll n);
int main()
{
    fastIO;
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vll v(n),even;
        ll odd=0,ans=0;

        for(auto &x:v)
        {
            cin>>x;
            if(x%2)odd++;
            else if(x%2==0 && x%4)odd++,ans++;
            else even.pb(x);
        }

        if(odd)cout<<ans+even.size()<<endl;
        else
        {
            ll mini=1e18;
            for(auto &x:even)
            {
                ll m=div(x);
                mini=min(mini,m);
            }
            cout<<mini+even.size()-1<<endl;
        }
    }
}

ll div(ll n)
{
    ll c=1;
    while(n%4==0)
    {
        n/=2;
        c++;
    }

    return c;
}

