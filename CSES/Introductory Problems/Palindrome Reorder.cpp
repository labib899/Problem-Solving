#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s; cin>>s;
    map<char,int> freq;
    for(auto x:s) freq[x]++;
    int n=s.size();
    string ans="";
    if(n%2==0)
    {
        for(auto x:freq)
        {   
            if(x.second%2)
            {
                cout<<"NO SOLUTION"<<endl;
                return;
            }
            for(int i=0;i<x.second/2;i++) ans+=x.first;
        }
        for(int i=ans.size()-1;i>=0;i--) ans+=ans[i];
    }
    else 
    {
        int odd=0;
        char ch;
        for(auto x:freq)
        {
            if(x.second%2) 
            {
                odd++;
                ch=x.first;
                if(odd>1)
                {
                    cout<<"NO SOLUTION"<<endl;
                    return;
                }
            }
            for(int i=0;i<x.second/2;i++) ans+=x.first;
        }
        ans+=ch;
        for(int i=ans.size()-2;i>=0;i--) ans+=ans[i];
    }
    cout<<ans<<endl;
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
