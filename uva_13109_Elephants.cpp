//uva_13109_Elephants.cpp
#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long i,j,sum=0,n,m,countt=0;
    cin>>n>>m;
    ll a[n+5]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(sum+a[i]<=m)
        {
            sum+=a[i];
           countt++;
        }
    }
    cout<<countt<<endl;

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;

        solve();
    }

}

int main()
{
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
Sample Input
3
5 14
10 15 16 17 18
4 20
1 2 3 4
5 22
9 1 8 7 7
Sample Output
1
4
3
*/
