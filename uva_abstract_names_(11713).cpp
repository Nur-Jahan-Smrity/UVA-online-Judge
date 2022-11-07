//uva_abstract_names_(11713).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long n,size1=0,size2=0,i,flag=0;
   // cin>>n;
   // cin.ignore();
    string s,s1;
    cin>>s>>s1;
    //for consonant use && .. ..
    //for vowel use || .. ...
    size1=s.size();
    size2=s1.size();
    if(size1==size2)
    {
        for(i=0;i<size1;i++)
        {
            if( (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u') && s[i]!=s1[i] )
             {
                  flag=1;
                  break;
             }
            else if( (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (s1[i]!='a' && s1[i]!='e' && s1[i]!='i' && s1[i]!='o' && s1[i]!='u')  )
             {
                  flag=1;
                  break;
             }

        }
        if(flag==0)
             cout<<"Yes"<<endl;
    }
    if(size1!=size2 || flag==1)
        cout<<"No"<<endl;
}
void test()
{
    long long t;
    cin>>t;
    //cin.ignore();
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
5
pele
polo
pele
pola
ronaldo
ronaldino
pele
pelet
pele
bele
Sample Output
Yes
Yes
No
No
No
*/
