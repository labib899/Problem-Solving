#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod=1e9+7;

ll expo(ll a,ll b)
{
    if(b==0) return 1;
    ll x=expo(a,b/2); x=(x*x)%mod;
    if(b&1) x=(x*a)%mod;
    return x;
}

ll inv(ll a) { return expo(a,mod-2); }

void solve()
{
    ll n; cin>>n;
    vector<ll> p(n),a(n);
    ll cnt=1,sum=1,prod;
    ll odd_idx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>p[i]>>a[i];
        cnt*=(a[i]+1); cnt%=mod;
        ll x=expo(p[i],a[i]+1)-1; x*=inv(p[i]-1); x%=mod;
        sum*=x; sum%=mod;
        if(a[i]&1) odd_idx=i;
    }

    if(odd_idx==-1)
    {   
        ll g=1,num=1;
        for(int i=0;i<n;i++) 
        {   
            g*=(a[i]+1); g%=(mod-1);
            num*=expo(p[i],a[i]/2); num%=mod;
        }
        prod=expo(num,g);
    }
    else 
    {   
        ll g=1,num=1;
        for(int i=0;i<n;i++)
        {
            if(i==odd_idx) g*=(a[i]+1)/2,g%=(mod-1);
            else g*=(a[i]+1),g%=(mod-1);
            num*=expo(p[i],a[i]); num%=mod;
        }
        prod=expo(num,g);
    }
    cout<<cnt<<" "<<sum<<" "<<prod<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t=1; //cin>>t;
    while(t--)
    {
        solve();
    }
}