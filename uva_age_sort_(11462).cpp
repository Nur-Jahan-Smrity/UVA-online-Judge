//uva_age_sort_(11462)
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void solve()
{
    long long n,i,j;
    //cin>>n;
    while(1)
    {
      cin>>n;
      if(n==0)
        break;
      long long a[n+2]={0};
      for( i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      /*for( i=n-1;i>=0;i--)
      {
          for( j=0;i<i;i++)
          {
              if(a[j]>a[j+1])
              swap(a[j],a[j+1]);
          }
      }*/
      for( i=0;i<n;i++)
      {
          if(i==n-1)
            cout<<a[i]<<endl;
          else
             cout<<a[i]<<" ";
      }

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
    //test();
    solve();
}
/*
Sample Input
5
3 4 2 1 5
5
2 3 2 3 1
0
Sample Output
1 2 3 4 5
1 2 2 3 3
*/
