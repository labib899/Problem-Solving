#include <bits/stdc++.h>
using namespace std;

 
void solve()
{
    string s; cin>>s;
    int ans=1;
    for(int i=0;i<s.size()-1;i++)
    {
        int cnt=1;
        while(s[i+1]==s[i]) cnt++,i++;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
}
 
signed main()
{
    int t=1; //cin>>t;
    while(t--) solve();
}