#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vec,dp;

// O(nlogn)
int LIS()
{
    vector<int> len; // this is not the actual LIS vector, rather it's size gives the length of LIS
    len.push_back(vec[0]);
    for(int i=1;i<n;i++)
    {
        int ind=lower_bound(len.begin(),len.end(),vec[i])-len.begin();
        if(ind>=0 and ind<len.size()) len[ind]=vec[i]; 
        else len.push_back(vec[i]);
    }
    return len.size();
}

void solve()
{
    cin>>n;
    vec.resize(n); dp.resize(n,1);
    for(int i=0;i<n;i++) cin>>vec[i];
    cout<<LIS()<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}
