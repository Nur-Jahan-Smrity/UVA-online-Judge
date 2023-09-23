//LOJ – 1227 –Boiled Eggs.cpp
//UVA_11900_Boiled Eggs.cpp
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0;

void solve()
{
    long long n,p,q,i;
    cin>>n>>p>>q;
    ll a[n+10]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count_egg=0,limit=0;
    for(i=0,limit=0;i<n;i++)
    {
        if(count_egg+1<=p && limit+a[i]<=q)
        {
            count_egg++;
            limit+=a[i];
        }
        else
            break;
    }
    printf("Case %d: %d\n", j , count_egg);



}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        j++;
        solve();
    }

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //int n = sizeof(arr) / sizeof(arr[0]);
    test();
    //solve();
}
/*
Sample Input
2
3 2 10
1 2 3
4 5 5
4 4 5 5
Sample Output
Case 1: 2
Case 2: 1

*/
