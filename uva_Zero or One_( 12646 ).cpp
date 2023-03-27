//uva 12646 Zero or One

#include<bits/stdc++.h>
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()
#define pi (3.141592653589)
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
void solve()
{
    long long a,b,c,i,j,count=0;
    while(cin>>a>>b>>c)
    {
        if((a==b && b==c && c==0)||(a==b && b==c && c==1))
            cout<<"*"<<endl;
        else
        {
            if(a==b)
                cout<<"C"<<endl;
             if(c==b)
                cout<<"A"<<endl;
                 if(a==c)
                cout<<"B"<<endl;
        }
    }

}
void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        //j++;
        solve();
    }

}

int main()
{
    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}
/*
Sample Input
1 1 0
0 0 0
1 0 0
Sample Output
C
*
A
*/
