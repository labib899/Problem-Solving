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
    ll t,n,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>s;
        vll v;
        ll ans=0,one=0;
        for(int i=0;i<n;i++)if(s[i]=='1')one++,v.pb(i+1);
        if(!one)cout<<1+(n-1)/(k+1)<<endl;
        else
        {
            ll x=v.size();
            ll a=v[0]-k-1,b=v[x-1]+k;
            if(a>0)ans+=1+(a-1)/(k+1);
            if(n-b>0)ans+=1+(n-b-1)/(k+1);
            for(int i=0;i<x-1;i++)
            {
                ll l=v[i]+k,r=v[i+1]-k;
                ll d=r-l-1;
                if(d>0)ans+=1+(d-1)/(k+1);
            }
            cout<<ans<<endl;
        }
    }
}

