#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n,q; cin>>n>>q;
    vector<vector<ll>> vec(n+1,vector<ll>(n+1,0)),pref(n+1,vector<ll>(n,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++) 
        {
            char ch; cin>>ch;
            if(ch=='*') vec[i][j]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            pref[i][j]=vec[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        }
    }
    while(q--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        cout<<pref[c][d]-pref[a-1][d]-pref[c][b-1]+pref[a-1][b-1]<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1; //cin>>t;
    while(t--) solve();
}