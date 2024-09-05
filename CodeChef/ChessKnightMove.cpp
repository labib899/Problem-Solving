#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int n=8,m=8,srcX,srcY,destX,destY;
vector<vector<int>> vis,dist;
vector<int> dx={-2,-1,1,2,2,1,-1,-2}, dy={1,2,2,1,-1,-2,-2,-1};

bool isValid(int x,int y)
{
    if(x<1 or x>n or y<1 or y>m) return false;
    if(vis[x][y]==1) return false;
    return true;
}

void bfs(int x,int y)
{
    queue<pii> q;
    q.push({x,y});
    vis[x][y]=1;

    while(q.size())
    {
        int px=q.front().first,py=q.front().second;
        q.pop();

        for(int i=0;i<8;i++)
        {
            if(isValid(px+dx[i],py+dy[i]))
            {
                int newX=px+dx[i],newY=py+dy[i];
                q.push({newX,newY});
                vis[newX][newY]=1;
                dist[newX][newY]=dist[px][py]+1;
                if(newX==destX and newY==destY) return;
            }
        }
    }
}

void solve()
{   
    string a,b; cin>>a>>b;
    vis.resize(n+2,vector<int>(m+2,0)); dist.resize(n+2,vector<int>(m+2,0));
    srcX=a[0]-'a'+1,srcY=a[1]-'0';
    destX=b[0]-'a'+1,destY=b[1]-'0';
    bfs(srcX,srcY);
    cout<<dist[destX][destY]<<endl;
    vis.clear(); dist.clear();
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t=1; cin>>t;
    while(t--) solve();
}