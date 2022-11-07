//uva_A_Node_too_far_(336).cpp
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int dist[35];
vector <int> node[35];
int vis[35];
void bfs (int source)
{
   dist[source]=0;
   queue<int>q;
   q.push(source);
   //vis[source] = 1;
   while(!q.empty())
   {
       int current_node = q.front();
       q.pop();
       for(int i=0;i<node[current_node].size();i++)
       {
           int v=node[current_node][i];
           if(dist[v]==-1)
           {
               dist[v]=dist[current_node]+1;
               q.push(v);
           }
       }
   }
}
int main()
{
   int n,index=0 ;
   while(cin >> n)
   {
       if(n==0)
        break;
   map<int,int>mp;
   int p=0;
   for(int i = 0; i < n; i++)
   {
       int sr, ds;
       cin >> sr >> ds;
       if(mp.find(sr)==mp.end())
         mp[sr]=p++;
       if(mp.find(ds)==mp.end())
         mp[ds]=p++;
       node[mp[sr]].pb(mp[ds]);
       node[mp[ds]].pb(mp[sr]);
   }
   int cnt=0;
   int nd,source;
   while( cin>>nd>>source)
   {

       if(nd==0 && source==0)
         break;
         index++;
       memset(dist,-1,sizeof dist);
        cnt=0;
       bfs(mp[nd]);
        for(int i = 0;i<p; i++)
        {
            if(dist[i]>source || dist[i]==-1)
                cnt++;
        }
       cout<<"Case "<<index<<": "<<cnt<<" nodes not reachable from node "<<nd<<" with TTL = "<<source<<"."<<endl;
        //Case 1: 5 nodes not reachable from node 35 with TTL = 2.
   }
   mp.clear();
   for(int i=0;i<=35;i++)
     node[i].clear();
   }

}

sample input
16
10 15 15 20 20 25 10 30 30 47 47 50 25 45 45 65
15 35 35 55 20 40 50 55 35 40 55 60 40 60 60 65
35 2 35 3 0 0
14
1 2 2 7 1 3 3 4 3 5 5 10 5 11
4 6 7 6 7 8 7 9 8 9 8 6 6 11
1 1 1 2 3 2 3 3 0 0
0
Sample Output
Case 1: 5 nodes not reachable from node 35 with TTL = 2.
Case 2: 1 nodes not reachable from node 35 with TTL = 3.
Case 3: 8 nodes not reachable from node 1 with TTL = 1.
Case 4: 5 nodes not reachable from node 1 with TTL = 2.
Case 5: 3 nodes not reachable from node 3 with TTL = 2.
Case 6: 1 nodes not reachable from node 3 with TTL = 3.
