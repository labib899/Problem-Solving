#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x; cin>>n>>x;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++) 
    {
        int x; cin>>x;
        vec.push_back({x,i+1});
    }
    sort(vec.begin(),vec.end());
    int i=0,j=n-1;
    while(i<j)
    {
        if(vec[i].first+vec[j].first<x) i++;
        else if(vec[i].first+vec[j].first>x) j--;
        else 
        {
            cout<<vec[i].second<<" "<<vec[j].second<<endl;
            return;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}