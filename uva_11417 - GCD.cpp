//uva_11417 - GCD.cpp
#include<bits/stdc++.h>

// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
void solve()
{
    int n,ans=0,i,j;
    while(cin>>n && n!=0)
    {


        for( i=1; i<n; i++)
        {
            for( j=i+1; j<=n; j++)
            {
                ans+=gcd(i,j);
                // cout<<ans<<" ";
            }
        }
        cout<<ans<<endl;
        ans=0;
    }

}
void test()
{
    long long t;
    cin>>t;
    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*
3
10 20 30 40
7 5 12
125 15 25


20
1
25
*/
