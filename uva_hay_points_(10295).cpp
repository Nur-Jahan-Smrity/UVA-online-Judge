//uva_hay_points_(10295).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long t,n,i,j,p=0,q=0,v,sum=0;
    cin>>t>>n;
    string s,s1;
    map<string,long long>mp;
    vector<string>s2;
    for(i=0; i<t; i++)
    {
        cin>>s>>v;
        mp[s]=v;
    }

    //getline(cin,s1);
    while( getline(cin,s1))
    {

        if(n==0)
            break;
        string word="";
        for(auto it:s1)
        {
            if(it==' ')
            {
                //if(mp[word]==word)
                sum+=mp[word];
                word="";
            }
            else if(it!=' ' )
            {
                //if(it!='.')
                    word=word+it;
                if(it=='.')
                {
                    //word=word+it;
                    cout<<sum<<endl;
                    sum=0;
                    n--;
                   // if(n==0)
                   //   break;
                }
            }

        }
        sum+=mp[word];
        if(n==0)
            break;

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
7 2
administer 100000
spending 200000
manage 50000
responsibility 25000
expertise 100
skill 50
money 75000
the incumbent will administer the spending of kindergarden milk money
and exercise responsibility for making change he or she will share
responsibility for the task of managing the money with the assistant
whose skill and expertise shall ensure the successful spending exercise
.
this individual must have the skill to perform a heart transplant and
expertise in rocket science
.
Sample Output
700150
150
*/
