#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin>>n;
    int arr[n];
    stack<pair<int,int>> st;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        while(st.size() and st.top().first>=arr[i]) st.pop();
        if(st.size()==0) cout<<0<<" ";
        else cout<<st.top().second<<" ";
        st.push({arr[i],i+1});
    }
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