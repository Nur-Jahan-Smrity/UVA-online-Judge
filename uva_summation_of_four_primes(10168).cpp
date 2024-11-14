//nov 11 ,2024
//uva 10168 Summation of Four Primes.cpp
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
int main()
{
    ll a;
    sieve( 10000000);
    while(cin>>a)
    {
        if(a<8)
        {
            cout<<"Impossible."<<endl;
        }
        else if(a%2==0)
        {
            a-=4;
            //ekta even number k always 2 ta prime number e convert kora jay..must jay..
            for(ll i=0; i<a; i++)
            {
                if( v[i] && (!mark[a-v[i]]) )
                {
                    cout<<"2 2 "<<v[i]<<" "<<a-v[i]<<endl;
                    break;
                }
            }
        }
        else if(a%2!=0)
        {
            a-=5;
            for(ll i=0; i<a; i++)
            {
                if( v[i] && (!mark[a-v[i]]) )
                {
                    cout<<"2 3 "<<v[i]<<" "<<a-v[i]<<endl;
                    break;
                }
            }

        }
    }

}
/*
Sample Input
24
36
46
7
Sample Output
3 11 3 7
3 7 13 13
11 11 17 7
Impossible.
*/

//............................................................................................................
//uva 10168...done 2 years ago
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
