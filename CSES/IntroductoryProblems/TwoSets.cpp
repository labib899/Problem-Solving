#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define print(v) { for(auto x:v) cout<<x<<" "; cout<<endl; }

void solve()
{
    ll n; cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2==0)
    {
        cout<<"YES"<<endl;
        sum/=2;
        set<ll> a,b;
        for(ll i=1;i<=n;i++) b.insert(i);
        ll x=n;
        while(sum)
        {
            if(sum-x>0) sum-=x;
            else x=sum,sum-=x;
            a.insert(x); b.erase(x);
            x--;
            //printf("inserting x: %lld\n", x);
        }
        cout<<a.size()<<endl;
        print(a);
        cout<<b.size()<<endl;
        print(b);
    }
    else cout<<"NO"<<endl;
}
 
signed main()
{
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++) solve();
}