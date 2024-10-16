#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    if(n!=1 and n<4) cout<<"NO SOLUTION"<<endl;
    else 
    {
        for(int i=n-1;i>=1;i-=2) cout<<i<<" ";
        for(int i=n;i>=1;i-=2) cout<<i<<" ";
        cout<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}
