#include <bits/stdc++.h>
using namespace std;
 
const int N=1e6+5;
vector<int> divisors(N);
 
void div()
{
    for(int i=1;i<=N;i++)
    {
        for(int j=i;j<=N;j+=i) divisors[j]++;
    }
}
 
void solve()
{
    int x; cin>>x;
    printf("%d\n",divisors[x]);
}
 
signed main()
{   
    //ios_base::sync_with_stdio(0);cin.tie(0);
    div();
    int t; scanf("%d", &t);
    while(t--) solve();
}