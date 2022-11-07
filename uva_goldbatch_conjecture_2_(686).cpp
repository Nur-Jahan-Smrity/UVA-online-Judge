//uva 686 (goldbatch conjecture 2) ...
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    //mark=1 (not prime) ..
    //marl=0  (prime) ..
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
    //mark[2] = 1; // 2 is the only even prime .. consider it as not prime for this prb...
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
void solve()
{
   ll sum=0,p=0,q=0,r=0;
   ll a,b,c,n,t,i;
   sieve(1000009);
   while(cin>>n)
   {
       if(n==0)
         break;
         ll count=0;
       //sieve(n);
       //if we add two odd prime number we will always get a even number ..
             for(i=2;i<=n/2;i++)
             {
                if(mark[i]==0 && mark[n-i]==0)
                {
                    count++;
                }
             }
             cout<<count<<endl;
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
6
10
12
0
Sample Output
1
2
1
*/
