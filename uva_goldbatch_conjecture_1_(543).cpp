//uva 543 (goldbatch conjecture 1) ...
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
    mark[2] = 1; // 2 is the only even prime .. consider it as not prime for this prb...
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    //prime[nPrime++] = 2;

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
       //sieve(n);
       //if we add two odd prime number we will always get a even number ..
       if(n%2==0)
       {
             for(i=3;i<=n/2;i++)
             {
                if(mark[i]==0 && mark[n-i]==0)
                {
                    cout<<n<<" = "<<i<<" + "<<n-i<<endl;
                    break;
                }
             }


       }
       else
        cout<<"Goldbach's conjecture is wrong."<<endl;
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
8
20
42
0
Sample Output
8 = 3 + 5
20 = 3 + 17
42 = 5 + 37
*/
