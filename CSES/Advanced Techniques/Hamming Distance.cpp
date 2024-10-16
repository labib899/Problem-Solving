#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k; cin>>n>>k;
    vector<string> vec(n);
    vector<int> v;
    for(int i=0;i<n;i++) cin>>vec[i];
    for(auto s:vec)
    {   
        int num=0,len=s.size();
        for(int i=0;i<len;i++) 
        {
            if(s[i]=='1') num+=(1<<(len-i-1));
        }
        v.push_back(num);
    }
    int mn=1e9;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            mn=min(mn,__builtin_popcount(v[i] xor v[j]));
        }
    }
    cout<<mn<<endl;
}

signed main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t=1;//cin>>t;
    while(t--) solve();
}