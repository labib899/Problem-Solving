#include<bits/stdc++.h>
using namespace std;
 
const int N=1e6+10;
vector<int> divisors(N,0);
 
signed main()
{   
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin>>n;
    vector<int> a(n);
    int mx=INT_MIN;
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        for(int j=1;j*j<=a[i];j++)
        {
            if(a[i]%j==0)
            {   
                divisors[j]++;
                if(a[i]/j!=j) divisors[a[i]/j]++;
            }
        }
    }
    for(int i=mx;i>=1;i--)
    {   
        if(divisors[i]>1) 
        {
            cout<<i<<endl;
            return 0;
        }
    }
}