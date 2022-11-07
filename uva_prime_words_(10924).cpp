//uva_prime_words_(10924).cpp
#include<bits/stdc++.h>
#include <map>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int prime[3000000] , nPrime;
int mark[10000002];
void sieve(int n)
{
    int i , j , limit = sqrt(n * 1.) + 2;
    mark[1] = 0;//coz they considered 1 as a prime number...uva 10924..
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;
    prime[nPrime++] = 2;

    for(i = 3; i <= n; i++)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }

}

void solve()
{
    sieve(2000);
    ///EOF(end of file) -> ctrl+z ...

     long long m,n,i,j,p=0,q=0,v,sum=0;
    string s,s1;
    map<char,long long>mp;
    vector<string>s2;
    //getline(cin,s1);
    for(i=0; i<26; i++)
    {
        char f1;
        char f2;
        f1=char(97+i);
        f2=char(65+i);
        mp[f1]=i+1;
        mp[f2]=27+i;
    }
    while(cin>>s)
    {
        //string word="";
        for(auto it:s)
        {
           sum+=mp[it];//adding each character.. ..
        }
        //sieve(sum);
        if(!mark[sum])
            cout<<"It is a prime word."<<endl;
        else
             cout<<"It is not a prime word."<<endl;
             sum=0;
    }

}
 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //test();
     solve();
}
/*
Sample Input
UFRN
contest
AcM
Sample Output
It is a prime word.
It is not a prime word.
It is not a prime word.
*/
