//D:\all codes\uva_294_Divisors.cpp
#include<iostream>
#include<algorithm>
#include<iostream>
#include<math.h>
#include <string.h>
using namespace std;
//int arr[1000004];
//int jj = 0;
int maxx=-1;
int number=0;
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
            //sum+=i;
            if(a/i!=i)
            {
                //cout<<"4c"<<endl;
                 //arr[count++]=a/i;
                  countt++;
                 // sum+=a/i;
            }

        }
        //cout<< countt<<" "<< sum<<endl;
    }
    n_divisor+=countt;
    //cout<<n_divisor<<endl;
    //s_divisor+=sum;
    //arr[jj]=n_divisor;
    //jj++;
    if(maxx<n_divisor)
    {
        number=0;
        maxx=n_divisor;
        number=a;
        //cout<<maxx<< " "<<number<<endl;
    }
     n_divisor=0;

     //cout<< countt<<" "<< sum<<endl;
   // memset(arr,0,sizeof(arr));
}
void solve()
{
    long long a,b,k,j;
    //cout<<"3a"<<endl;
   // vector<long long>v;
    cin>>a>>b;
    for(j=a;j<=b;j++)
    {

            //cout<<"3b"<<endl;
           divisor(j);

    }
    //sort(arr,arr+jj);
   //v.push_back(n_divisor);
    cout<<"Between "<<a<<" and "<<b<<", "<<number<<" has a maximum of "<<maxx<<" divisors."<<endl;
    //cout<<number<<endl;
    n_divisor=0;s_divisor=0,maxx=-1,number=0;

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
3
1 10
1000 1000
999999900 1000000000

Sample Output
Between 1 and 10, 6 has a maximum of 4 divisors.
Between 1000 and 1000, 1000 has a maximum of 16 divisors.
Between 999999900 and 1000000000, 999999924 has a maximum of 192 divisors.

*/
