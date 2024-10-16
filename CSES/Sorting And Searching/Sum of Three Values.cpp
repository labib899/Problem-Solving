#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll n,x; cin>>n>>x;
    vector<pair<ll,ll>> vp;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        vp.push_back({x,i+1});
    }
    sort(vp.begin(),vp.end());
    for(int i=0;i<n-2;i++)
    {
        ll rem=x-vp[i].first;
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(vp[j].first+vp[k].first<rem) j++;
            else if(vp[j].first+vp[k].first>rem) k--;
            else 
            {
                cout<<vp[i].second<<" "<<vp[j].second<<" "<<vp[k].second<<endl;
                return;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}