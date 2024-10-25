#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll hi=1e18;

ll expo(ll a,ll b)
{
    if(b==0) return 1;
    ll x=expo(a,b/2); x*=x;
    if(b%2) x*=a;
    return x;
}

char func(ll n,int i)
{
    string s=to_string(n);
    return s[i-1];
}

void solve()
{
    ll k; cin>>k;
    ll d=0,l,dig;
    for(int i=1;d<=hi;i++)
    {   
        l=d+1;
        dig=i;
        d+=i*9*expo(10,i-1);
        if(k<=d) break;
    }
    ll q=(k-l+1)/dig,rem=(k-l+1)%dig; 
    if(rem) q++;
    ll num=expo(10,dig-1)-1+q;  
    cout<<(rem==0 ? func(num,dig):func(num,rem))<<endl;
}   

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; cin>>t;
    while(t--) solve();
}