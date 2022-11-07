//uva 12592 slogan learning
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;
void solve()
{
    long long t;
    cin>>t;
    cin.ignore();
    map<string,string>mp;
    string s,s1,s2;
    for(long long i=0;i<t;i++)
    {
        getline(cin,s);

        getline(cin,s1);

        mp[s]=s1;
    }
    long long n;
    cin>>n;
    cin.ignore();
    for(long long i=0;i<n;i++)
    {
        getline(cin,s2);

        cout<<mp[s2]<<endl;
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
3
ko te kader molla
tui rajakar tui rajakar
tumi ke ami ke
garo chakma bangali
jalo re jalo
agun jalo
2
jalo re jalo
ko te kader molla

Sample Output
agun jalo
tui rajakar tui rajakar
*/
