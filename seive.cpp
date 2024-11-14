//seive.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool mark[90000009];//global variable shob shomoy 0 contain kore prottek index e.........
vector<ll>v;
void seive(ll n)
{
    ll i,j,limit=sqrt(n);
    mark[1]=1; //j number gulo prime na oguloke amra 1 diye represent kortesi...
    v.push_back(2);
    //2 er joto multiple ase shob gulo k not prime declare korar jonno loop ta chalano hoise..
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i++)
    {
        if (mark[i] == 0)
        {
            v.push_back(i);
            if(i<=limit)
            {
                for(j=i * i; j<=n; j+= i * 2)
                {
                    mark[j]=1;
                }

            }
        }

    }

}
int main()
{
    seive(10000000);
    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}
