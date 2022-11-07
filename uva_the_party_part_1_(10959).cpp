//uva_the_party_part_1_(10959).cpp
//distance from source to destination or level of destination .. ..
#include <bits/stdc++.h>
#define pb push_back
using namespace std;
const int N = 1e5+10;
//vector <int> node[N];
//int vis[N];
//int level[N];
void bfs (int source, int n, vector<int>node[])
{
    int vis[N]={0};
    int level[N]={0};
   queue<int>q;
   q.push(source);
   vis[source] = 1;
   while(!q.empty())
   {
       int current_node = q.front();
       q.pop();

       for(int child : node[current_node])
       {
           if(!vis[child])
           {
               q.push(child);
               vis[child] = 1;
               //as from one node to another node level or distance is increasing by 1 ... so 1 is added here .. ..
               level[child] = level[current_node] + 1;
           }
       }
   }
    //printf("\n");
    for(int i = 1; i < n; i++)
   {
    printf("%d", level[i]);
    printf("\n");
   }
}
int main()
{
   int n , e,t ,source;

   cin>>t;
    while(t--)
    {
        vector <int> node[N];
        //printf("Enter number of nodes and edges :\n");
      // printf("\n");
        cin >> n >> e;
        // memset(level, -1, sizeof level);
//  printf("Enter %d instructions : ",e);
        // printf("\n");
        for(int i = 0; i < e; i++)
        {
            int sr, ds;
            cin >> sr >> ds;
            //these 2 lines indicate that the graph is undirected.. as it can go from sr to ds and vice versa...means 2 -> 5 again 5 -> 2 ... ..
            node[sr].pb(ds);
            node[ds].pb(sr);
        }
        //printf("Enter Source : ");
        //scanf("%d",&source);
        //printf("\n");
        bfs(0,n,node);
        if(t)
          printf("\n");
    }
}
/*
Output
For each test case, the output must follow the description below. The outputs of two consecutive cases
will be separated by a blank line.
Output P − 1 lines. Line i is the Giovanni number of person i, for 1 ≤ i ≤ P − 1. Note that it is
P − 1 because we skip Don Giovanni in the output.
Sample Input
1
5 6
0 1
0 2
3 2
2 4
4 3
1 2
*/
