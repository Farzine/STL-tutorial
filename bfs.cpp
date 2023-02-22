#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> a[N];
bool vis[N];
int level[N];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source] = true;
    while(!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        //cout<<cur_v<<" "; // order of the bfs
        for(int child : a[cur_v])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[cur_v]+1;
            }
        }
    }
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n,m; // n = number of vertex and m = number of edges
   cin>>n>>m;
   for(int i = 0; i<m; i++)
   {
       int x,y;
       cin>>x>>y;
       a[x].push_back(y);  //taking adjacency matrix input
       a[y].push_back(x);
   }
   int p;
   cin>>p;  // the node from which you wanted to start the bfs
   bfs(p);

   // print the level
   for(int i=1; i<=n; i++)
   {
       cout<<i<<": "<<level[i]<<endl;
   }

   return 0;
}
