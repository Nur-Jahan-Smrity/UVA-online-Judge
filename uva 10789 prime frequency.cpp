//uva 10789 prime frequency.cpp
//problem 1.cpp
//seive.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool mark[90000009];//global variable shob shomoy 0 contain kore prottek index e.........
vector<ll>v;
void seive(ll n)
{
    ll i,j,limit=sqrt(n);
    mark[1]=1;
    v.push_back(2);
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
    seive(2001);
   /* for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }*/
    ll t;
    cin>>t;
    for(ll j=1;j<=t;j++)
    {
        string s,demo;
        cin>>s;
        map<char,ll>mp;
        for(ll i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto it:mp)
        {
            if(mark[it.second]==0)
            {
                demo+=it.first;
            }

        }
        if(demo.size())
        {
            cout<<"Case "<<j<<": "<<demo<<endl;
        }
        else
        {
             cout<<"Case "<<j<<": empty"<<endl;
        }
    }
}
/*
Sample Input
3
ABCC
AABBBBDDDDD
ABCDFFFF
Sample Output
Case 1: C
Case 2: AD
Case 3: empty
*/
