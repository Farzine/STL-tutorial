#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

vector<int>a[N];
bool vis[N];

void dfs(int vertex)
{
    /*
    //Take action on vertex after entering the vertex
    */
    vis[vertex] = true;
    for(int child : a[vertex])
    {
        if(vis[child])
            continue;
        /*
        //Take action child before entering the  child node
        */
        dfs(child);
        /*
        //Take action  on child after exiting child node
        */
    }
    /*
    //Take action on vertex before exiting the vertex
    */
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n,e ; // n  = number of nodes ; e = number of edges
   cin>>n>>e;
   for(int i=0; i<e; i++)
   {
       int x,y; // taking input for adjacency matrix
       cin>>x>>y;
       a[x].push_back(y);
       a[y].push_back(x);
   }

   for(int i=1; i<=n; i++)
   {
       dfs(i);
   }

   return 0;
}
