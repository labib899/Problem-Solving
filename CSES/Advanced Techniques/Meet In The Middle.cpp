#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

struct custom_hash 
{
    static uint64_t splitmix64(uint64_t x) 
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const 
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

gp_hash_table<long long,int,custom_hash> fast_table;

int n,x;
vector<long> a,b;

void subset_sum(int i,vector<long> &vec,vector<long> &sum_vec,long sum)
{
    if(i==vec.size()) { sum_vec.push_back(sum); return; }
    subset_sum(i+1,vec,sum_vec,sum+vec[i]);
    subset_sum(i+1,vec,sum_vec,sum);
}

void solve()
{
    cin>>n>>x;
    a.resize(n/2); b.resize(n-n/2);
    for(int i=0;i<n/2;i++) cin>>a[i];
    for(int i=0;i<n-n/2;i++) cin>>b[i];

    vector<long> sumA,sumB;
    subset_sum(0,a,sumA,0); subset_sum(0,b,sumB,0);
    sort(sumA.begin(),sumA.end()); sort(sumB.begin(),sumB.end());
    long ans=0;
    for(auto e:sumA) fast_table[e]++;
    for(auto e:sumB)
    {
        if(e>x) break;
        ans+=fast_table[x-e];
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}
