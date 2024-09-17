#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
const LL mod=1e9+7;
 
LL expo(LL a,LL b,LL m)
{
    if(b==0) return 1;
    LL ans=expo(a,b/2,m);
    ans=(ans*ans)%m;
    if(b%2) ans=(ans*a)%m;
    return ans;
}
 
void solve()
{
    LL a,b; cin>>a>>b;
    LL ans=expo(a,b,mod);
    cout<<ans<<endl;
}
 
signed main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--) solve();
}