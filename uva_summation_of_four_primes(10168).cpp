//uva 10168...
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int prime[10000009] , nPrime;
int mark[10000009];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 1;
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
   long long a,b,n,c=0,c1=0,d=0,d1=0,i,j,flag=0;
  sieve(10000000);
   while(cin>>n)
   {
       //sieve(n);
       if(n<=7)
       {
           cout<<"Impossible."<<endl;
           continue;
       }
       if(n%2==0)
       {
           cout<<"2 2 ";
           c=n-4;
            for(int j=2;j<=c ; j++)
            {
                    if(mark[j]==0 && mark[c-j]==0)
                    {
                        cout<<j<<" "<<c-j<<endl;
                        flag=1;
                        break;
                    }
            }
           // if(flag==0)
            //    cout<<"Impossible."<<endl;
       }
       if(n%2!=0)
       {
           cout<<"2 3 ";
            d=n-5;
            for(int j=2;j<=d; j++)
            {
                    if(mark[j]==0 && mark[d-j]==0)
                    {
                        cout<<j<<" "<<d-j<<endl;
                           flag=1;
                        break;
                    }
            }
         //    if(flag==0)
           //     cout<<"Impossible."<<endl;
       }
       c=0;d=0;
       flag=0;
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
24
36
46
Sample Output
3 11 3 7
3 7 13 13
11 11 17 7
*/
