//uva_CD_(11849).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
typedef long long ll;
//int k=0;
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
void solve()
{

    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        map<ll,ll>mp1;
        // map<ll,ll>mp2;
        ll aa[a+5]= {0},bb[b+5]= {0},count=0;
        for(ll i=0; i<a; i++)
        {
            cin>>aa[i];
            mp1[aa[i]]=1;
        }
        for(ll i=0; i<b; i++)
        {
            cin>>bb[i];
            if(mp1[bb[i]]==1)
            {
                count++;
            }
            //mp[aa[i]]=1;
        }
        cout<<count<<endl;
    }
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //k++;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //test();
    solve();
}
/*
Sample Input
3 3
1
2
3
1
2
4
0 0
Sample Output
2
*/
