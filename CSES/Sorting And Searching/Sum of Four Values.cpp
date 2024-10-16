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
    for(int i=0;i<n-3;i++)
    {   
        for(int j=i+1;j<n-2;j++)
        {   
            ll rem=x-vp[i].first-vp[j].first;
            int l=i+2,r=n-1;
            while(l<r)
            {
                if(vp[l].first+vp[r].first<rem) l++;
                else if(vp[l].first+vp[r].first>rem) r--;
                else 
                {
                    cout<<vp[i].second<<" "<<vp[j].second<<" "<<vp[l].second<<" "<<vp[r].second<<endl;
                    return;
                }
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