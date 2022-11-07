//uva_11942 lumberjacks
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long t,d[21]={0},j=0,n;
    cin>>t;
    n=t;
    while(t--)
    {


        long long a[11]= {0},b[11]= {0},c[11]= {0},i,count=0,count1=0;
// vector<long long>b[11];
// vector<long long>c[11];
        for(i=0; i<10; i++)
        {
            cin>>a[i];
            //b[i].push_back(a[i]);
            //c[i].push_back(a[i]);
            b[i]=a[i];
            c[i]=a[i];
        }
        sort(b,b+10);
        sort(c,c+10,greater<long long>());
        for(i=0; i<10; i++)
        {
            if(a[i]==b[i])
                count++;
            if(a[i]==c[i])
                count1++;
        }
        if(count==10 || count1==10)
        {
            d[j]=1;
            //cout<<d[j]<<endl;
            j++;
        }
        else
        {
            d[j]=0;
            //cout<<d[j]<<endl;
            j++;
        }
    }
    cout<<"Lumberjacks:"<<endl;
    for(j=0;j<n;j++)
    {
        if(d[j]==1)
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
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
     //cout<<"Lumberjacks:"<<endl;
     //test();
    solve();
}
/*
Sample Input
3
13 25 39 40 55 62 68 77 88 95
88 62 77 20 40 10 99 56 45 36
91 78 61 59 54 49 43 33 26 18
Sample Output
Lumberjacks:
Ordered
Unordered
Ordered
*/
