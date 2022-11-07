//uva_newspaper_(11340).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void solve()
{
    long long m,n,i,j,p=0,q=0,v,sum=0;
    cin>>m;
    string s,s1;
    map<string,long long>mp;
    vector<string>s2;
    for(i=0; i<m; i++)
    {
        cin>>s>>v;
        mp[s]=v;
    }
    //getline(cin,s1);
    cin>>n;
    cin.ignore();//otherwise it will consider enter as a string.. ..
    while(n--)
    {
        //cin.ignore();//otherwise it will consider enter as a string.. ..
        getline(cin,s1);
        string character="";
        //string word="";
        for(auto it:s1)
        {
            character=it;
           sum+=mp[character];//adding each character.. ..
           character="";
        }
    }
    //cout<<sum<<endl;
   // string ans="";
    //string word="";
    //ans+=sum;
    double p1=0,p2=0;
    //p1=sum%100;
    p2=sum/100.00;

    /*for(i=0;i<5;i++)
    {
        if(i==0)
        {
            word+=ans[0];
        }
        if(i==1)
        {
            word+=".";
        }
        if(i==2)
        {
            word+=ans[1];
        }
        if(i==3)
        {
            word+=ans[2];
        }
        if(i==4)
        {
            word+="$";
        }
    }*/
    cout<<fixed<<setprecision(2);
    cout<<p2<<"$"<<endl;
}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test();
    //solve();
}
/*
Sample Input
1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.
Sample Output
3.74$
*/
