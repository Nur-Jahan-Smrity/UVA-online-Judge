//uva_multiple_of_17_(11879).cpp
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
        long long count=0,i,j,sum=0,flag=0,y=0;
        string s1;
        cin>>s1;
        //ekahne jokhon s1[i]=='0' ei condition ta diye break disilam tokhon ber ber input nicchilo break hocchilo na.. jokhon string purata k string 0 mane "0" etar shate compare korsi tokhon correct outcome ashse ...
        if(s1=="0")
            break;
            /*
        int x=0;
        x=s1.back()-'0';
       // cout<<"last:"<<x<<endl;
         s1.pop_back();
        //  cout<<"remaining part:"<<s1<<endl;
        stringstream value(s1);
        value>>s;
        x=x*5;
       // cout<<"5d:"<<x<<endl;
        s=s-x;
         //cout<<"remaining part - 5d:"<<s<<endl;
        string s2=to_string(s);*/
        // cout<<"new string:"<<s2<<endl;
        for(i=0; i<s1.size(); i++)
        {
            //cout<<s1[i]<<" => ";
            /*if(s1[i]==0)
            {
                flag=1;
                  break;
            }*/

            if(s1[i]<48)
                continue;
            /*
            //string.rbegin() .. it is used to reverse the string ..

            std::string str ("Some string");
            cout << str.back() // it is used to print the last character of string ..
            */
            // cout<<s1.back()<<"=>";

            sum=(sum*10)+abs(s1[i]-'0');   // '0' means 48 ascii value of zero is 48..
            // cout<<abs(s1[i]-'0')<<" ";
            //str.erase( str.end()-1 );  // used to erase last character..
            // st.pop_back();  // erase last character ...
            /* s1.erase(s1.end()-1);
             cout<<s1<<"..."<<endl;
             */
            /*
            s1.pop_back();
             cout<<s1<<"..."<<endl;
             */
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
            sum%=17;
            //cout<<sum<<" ";
            // cout<<endl;
        }
        if(!sum)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
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
34
201
2098765413
1717171717171717171717171717171717171717171717171718
0
Sample Output
1
0
1
0
*/
