//UVA_10018 Reverse and Add.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//int j=0;
bool palidrome(string s)
{
    string p=s;
    reverse(s.begin(),s.end());
    return s==p;
}
ll sum_of_digit(string s)
{
    ll res=0;
    for(int i=0;i<s.size();i++)
    {
        res=res*10+s[i]-48;

    }
    return res;
}
void solve()
{

    ll i,j,n,count=0;
    string s,s1="";
    cin>>s;
    s1+=s;

    while(1)
    {
        ll result=palidrome(s);

        if(result)
        {
            cout<<count<<" "<<s<<endl;
            break;
        }
        if(count==1000)
            break;
        reverse(s1.begin(), s1.end());
        ll add=sum_of_digit(s)+sum_of_digit(s1);
        //if you apply stoi in this code it will give runtime error
      //  ll add=std::stoi(s) + std::stoi(s1);
        //cout<<add<<endl;
        s.clear();
        s1.clear();
        s=to_string(add);
        s1=s;
         count++;
    }

}
void test()
{
    long long t;
    cin>>t;
    //cout<<atoi("0201")+atoi("0201")<<endl;
    while(t--)
    {
        //j++;
        solve();
        //cin.ignore();

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
195
265
750
Sample Output
4 9339
5 45254
3 6666
*/
