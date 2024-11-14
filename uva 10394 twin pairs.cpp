//uva 10394 twin pairs.cpp
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
//ll prime[260005], nPrime;
bool mark[20000005];
vector<long long> v;
//map<int,pair<int, int>> vis;
vector<pair<long long,long long>> vis;

void sieve(ll n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    mark[1] = 1; //we are inserting true value when it is not prime.
    v.push_back(2);
    for(int i = 4; i <= n; i += 2)
    {
        // arr[i] += 2;
        mark[i] = 1;
    }
    //prime[nPrime++] = 2;
    for(i = 3; i <= n; i++)
    {
        if(mark[i] == 0)
        {
            v.push_back(i);
            //prime[nPrime++] = i;
            if (i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;

                }
            }


        }
    }
}
void pair_up()
{
    for(int i = 0; i < v.size(); i++) // here the difficult thing was to choose the limit.
    {
        if(v[i] + 2 == v[i + 1])
        {
            vis.push_back(make_pair(v[i], v[i + 1]));
        }
    }


}
int main()
{
    ll a;
    sieve(20000004);
    pair_up();

    while(cin>>a)
    {

        cout<<"(" << vis[a - 1].first << ", " << vis[a-1].second <<")"<<endl;
    }
}
/*
Sample Input
1
2
3
4
Sample Output
(3, 5)
(5, 7)
(11, 13)
(17, 19
*/
