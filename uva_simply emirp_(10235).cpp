//uva_simply emirp_(10235).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int mark[1000000];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    for (int i = 4; i < n; i += 2)
        mark[i] = 1;
    for (i = 3; i * i <= n; i += 2)
    {
        if (!mark[i])
        {
            for (j = i * i; j < n; j += i * 2 )
            {
                mark[j] = 1;
            }
        }
    }
}

void solve()
{
  int n,p=0;
   sieve(1000000);
    while(cin>>n)
    {
        p=n;
        long long rem=0,rev=0;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        if(mark[p]==0 && mark[rev]==0 && p!=rev)
            cout<<p<<" is emirp."<<endl;
        else if(mark[p]==0)
            cout<<p<<" is prime."<<endl;
        else
            cout<<p<<" is not prime."<<endl;
    }
}
/*void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // test();
    solve();
}
/*
Sample Input
17
18
19
179
199
Sample Output
17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp.
*/
