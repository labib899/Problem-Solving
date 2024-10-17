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

gp_hash_table<long long,int,custom_hash> safe_hash_table;


struct query
{
    int l,r,i;
};

const int N=2e5+5;
int arr[N],ans[N],freq[N];
query qr[N];
int block=555,cnt=0;
int n,q;

void compress()
{
    int count=0;
    for(auto x:safe_hash_table) safe_hash_table[x.first]=count++;
    for(int i=0;i<n;i++) arr[i]=safe_hash_table[arr[i]];
}

bool cmp(query a,query b)
{
    if(a.l/block!=b.l/block) return a.l/block < b.l/block;
    else return a.r < b.r;
}

void add(int idx)
{
    freq[arr[idx]]++;
    if(freq[arr[idx]]==1) cnt++;
}

void remove(int idx)
{
    freq[arr[idx]]--;
    if(freq[arr[idx]]==0) cnt--;
}

void solve()
{
    cin>>n>>q;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        safe_hash_table[arr[i]]=0;
    }
    compress();
    for(int i=0;i<q;i++)
    {
        int l,r; cin>>l>>r;
        l--,r--;
        qr[i].l=l, qr[i].r=r, qr[i].i=i;
    }

    sort(qr,qr+q,cmp);
    int ml=0,mr=-1;
    for(int i=0;i<q;i++)
    {
        int l=qr[i].l, r=qr[i].r;

        while(ml>l) ml--,add(ml);
        while(mr<r) mr++,add(mr);
        while(ml<l) remove(ml),ml++;
        while(mr>r) remove(mr),mr--;

        ans[qr[i].i]=cnt;
    }   
    for(int i=0;i<q;i++) cout<<ans[i]<<" "<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1; //cin>>t;
    while(t--) solve();
}