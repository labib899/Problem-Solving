#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef complex<ll> P;

#define X real()
#define Y imag()

ll cross (P a,P b) { return (conj(a)*b).Y; }

void solve()
{
    int n; cin>>n;
    vector<P> vec;
    for(int i=0;i<n;i++) 
    {
        ll x,y; cin>>x>>y;
        vec.push_back({x,y});
    }
    ll area=0;
    for(int i=0;i<n;i++) area+=cross(vec[i],vec[(i+1)%n]);
    cout<<abs(area)<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}