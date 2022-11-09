//uva_you_can_say_11_(10929).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
#include <sstream>
using namespace std;
typedef long long ll;
//int k=0;
ll Pow(ll c, ll d)
{
    return d == 0 ? 1 : c * pow(c, d - 1);
}
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return ((a * b) / gcd(a, b));
}
void solve()
{


    while(1)
    {
        int s=0;
    long long count=0,i,j,sum=0,flag=0,x=0,y=0;
        string s1;
        cin>>s1;
        //ekahne jokhon s1[i]=='0' ei condition ta diye break disilam tokhon ber ber input nicchilo break hocchilo na.. jokhon string purata k string 0 mane "0" etar shate compare korsi tokhon correct outcome ashse ...
        if(s1=="0")
            break;
        for(i=0; i<s1.size(); i++)
        {
            //cout<<s1[i]<<" => ";
            /*if(s1[i]==0)
            {
                flag=1;
                  break;
            }*/

            if(s1[i]>0 && s1[i]<48)
                continue;
            sum=(sum*10)+abs(s1[i]-'0');   // '0' means 48 ascii value of zero is 48..
            // cout<<abs(s1[i]-'0')<<" ";
            /*
            // object from the class stringstream
            stringstream geek(s);
            // The object has the value 12345 and stream
            // it to the integer x
            int x = 0;
            geek >> x;
            // Now the variable x holds the value 12345
            cout << "Value of x : " << x;
            */
            //stringstream value(s2);
            //value>>s;
            sum%=11;
            //cout<<sum<<" ";
            // cout<<endl;
        }
        if(!sum)
            cout<<s1<<" is a multiple of 11."<<endl;
        else
            cout<<s1<<" is not a multiple of 11."<<endl;
    }

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //k++;
        solve();
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
112233
30800
2937
323455693
5038297
112234
0
Sample Output
112233 is a multiple of 11.
30800 is a multiple of 11.
2937 is a multiple of 11.
323455693 is a multiple of 11.
5038297 is a multiple of 11.
112234 is not a multiple of 11.
*/
