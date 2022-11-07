//uva_contract_revision_(11830).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long n,i,j,sum=1,count=0;
    string s;

    while(1)
    {
         cin>>n>>s;
         long long p=s.size();
         if(n==0 && s=="0")
            break;
        string s1="";
        for(i=0;i<p;i++)
        {
            if(('0'+n)!=s[i])
            {
                s1+=s[i];
                if((int)s[i]==0)
                   sum=0;
            }

        }
        for(i=0;i<s1.size();i++)
        {
                if(s1[i]=='0')
                {
                    count++;
                    sum=0;
                }

                else
                {
                    sum=1;
                    break;
                }
        }
        //cout<<sum<<endl;
        if((sum==0 && count==s1.size()) || s1.empty()==1)
          cout<<"0"<<endl;
        else
          cout<<s1<<endl;

    }

}
/*void test()
{
    long long t;
    cin>>t;
    //cin.ignore();
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
5 5000000
3 123456
9 23454324543423
9 99999999991999999
7 777
0 0
Sample Output
0
12456
23454324543423
1
0
*/
