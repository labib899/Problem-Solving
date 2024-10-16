#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int n,k;
const ll inf=1e9;
vector<ll> vec;

bool isValid(ll x)
{
    ll sum=0;
    for(int i=0;i<n;i++) sum+=min((x/vec[i]),inf);
    return sum>=k;
}

ll binary(ll low,ll high)
{
    while(low<high)
    {
        ll mid=low/2+high/2;
        if(isValid(mid)) high=mid;
        else low=mid+1;
    }
    return low;
}

void solve()
{
    cin>>n>>k;
    vec.resize(n);
    for(int i=0;i<n;i++) cin>>vec[i];
    cout<<binary(0,k*vec[0])<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}