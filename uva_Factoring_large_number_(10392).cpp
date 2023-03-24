//uva_Factoring_large_number_(10392).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>

using namespace std;
typedef long long int ll;

vector<long long>v;
void solve()
{
    ll i,j,n;
    while(scanf("%lld", &n) == 1)
    {
         if(n<0)
            break;
        //vector<long long>v;
        for(i=2; i*i<=n; i++)
        {
            //cout<<prime[0]<<endl;
            while(n%i==0)
            {
                // cout<<prime[i]<<endl;
                 // printf("    %lld\n", i);
                 cout<<"    "<<i<<endl;
                n/=i;
            }
        }
        if(n>1)
        {
           // printf("    %lld\n",n);

            cout<<"    "<<n<<endl;
            cout<<endl;
          //  v.push_back(n);
        }

    }
}
/*void test()
{
    long long t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        solve(n);
    }

}*/
int main()
{


    //sieve(10000000);
    //test();
    solve();
}
/*
Sample Input
90
1234567891
18991325453139
12745267386521023
-1
Sample Output
2
3
3
5

1234567891

3
3
13
179
271
1381
2423

30971
411522630413

*/
