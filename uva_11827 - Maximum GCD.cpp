//uva_11827 - Maximum GCD.cpp
#include<bits/stdc++.h>

  // reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;

void solve()
{
    string main_string;
    
    getline(cin,main_string);
    istringstream temp(main_string);
    vector<int>v;
    int x,ans=0;
    while(temp>>x)
    {
        v.push_back(x);
    }
    
    
    for(int i=0; i<v.size(); i++)
    {
         for(int j=i+1; j<v.size(); j++)
         {
             ans=max(ans,__gcd(v[i],v[j]));
         }
    }
    cout<<ans<<endl;
}
void test()
{
    long long t;
    cin>>t;
    string s;
    getline(cin,s);
    while(t--)
    {
        //j++;
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
3
10 20 30 40
7 5 12
125 15 25


20
1
25
*/
