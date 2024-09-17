#include <bits/stdc++.h>
using namespace std;
 
const int N=8;
vector<int> fact(N+1,1);
void init()
{
    for(int i=2;i<=N;i++) fact[i]=fact[i-1]*i;
}
 
void solve()
{
    string s; cin>>s;
    int n=s.size();
    map<char,int> freq;
    for(auto x:s) freq[x]++;
    int total=fact[n];
    for(auto x:freq) total/=fact[x.second];
    cout<<total<<endl;
    set<string> ans;
    sort(s.begin(),s.end());
    do
    {
        ans.insert(s);
    } 
    while(next_permutation(s.begin(),s.end()));
    for(auto x:ans) cout<<x<<endl;
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    init();
    int t=1; //cin>>t;
    for(int i=1;i<=t;i++)
    {
        solve();
    }
}