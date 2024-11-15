//uva 10931 Parity.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a;
    while(cin>>a)
    {
        if(!a){
            break;
        }
        int cnt = 0;
        string temp = "";
        while(a)
        {
            int x = a % 2;
            cnt += x;
            temp += x+ 48;
            a/=2;
        }
        reverse(temp.begin(),temp.end());
        cout <<"The parity of " << temp<< " is " << cnt << " (mod 2)." << endl;
    }
}

