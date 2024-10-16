#include <bits/stdc++.h>
using namespace std;

void TOH(int n,int a,int b,int c)
{
    if(n>0)
    {
        TOH(n-1,a,c,b);
        cout<<a<<" "<<c<<endl;
        TOH(n-1,b,a,c);
    }
}

void solve()
{
    int n; cin>>n;
    cout<<(1<<n)-1<<endl;
    TOH(n,1,2,3);
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
