//uva_12043_divisor.cpp
#include<iostream>
#include<algorithm>
#include<iostream>
#include<math.h>
#include <string.h>
using namespace std;
//int arr[1000004];
//int j = 0;
long long  s_divisor=0;
long long  n_divisor=0;
void divisor(long long a)
{
     //cout<<"4a"<<endl;
    long long count=0,i,q=0,countt=0,sum=0;
    for(i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            //arr[count++]=i;
            //cout<<"4b"<<endl;
            countt++;
            sum+=i;
            if(a/i!=i)
            {
                //cout<<"4c"<<endl;
                 //arr[count++]=a/i;
                  countt++;
                  sum+=a/i;
            }

        }
        //cout<< countt<<" "<< sum<<endl;
    }
    n_divisor+=countt;
    s_divisor+=sum;
     //cout<< countt<<" "<< sum<<endl;
   // memset(arr,0,sizeof(arr));
}
void solve()
{
    long long a,b,k,j;
    //cout<<"3a"<<endl;
    cin>>a>>b>>k;
    for(j=a;j<=b;j++)
    {
        if(j%k==0)
        {
            //cout<<"3b"<<endl;
           divisor(j);
        }
    }

    cout<< n_divisor<<" "<< s_divisor<<endl;
    n_divisor=0;s_divisor=0;

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
       // j++;
      // cout<<"2a"<<endl;
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  //  j = 0;
  //cout<<"1a"<<endl;
    test();
    //solve();
}
/*
Sample Input
2
5 12 3
1 100 3

Sample Output
13 53
217 3323

*/
