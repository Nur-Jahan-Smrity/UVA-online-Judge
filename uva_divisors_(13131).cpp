//uva_13131_divisors
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long a,b,k,n,i,j,sum=0;
    cin>>n>>k;
    for(i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i%k!=0)
            {
                //cout<<i<<endl;
                sum+=i;
            }

            if( ((n/i)%k!=0) && (n/i)!=i  )
            {
                sum+=(n/i);
            }

        }

    }
    cout<<sum<<endl;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
    //solve();
}
/*
Sample Input
5
20 2
10 1
20 5
7 5
20 40
Sample Output
6
0
7
8
42
*/
