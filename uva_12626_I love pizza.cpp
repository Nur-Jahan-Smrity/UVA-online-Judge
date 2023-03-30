//uva 12626 I love pizza
//Index_of_each_character
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
    long long i,j,count=0,M=0,A=0,R=0,G=0,I=0,T=0;
    string s;
    cin>>s;
    //getline(cin,s);
   // getchar();
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='M')
            M++;
        if(s[i]=='A')
            A++;
        if(s[i]=='R')
            R++;
        if(s[i]=='G')
            G++;
        if(s[i]=='I')
            I++;
        if(s[i]=='T')
            T++;
    }
   // cout<<M<<A<<R<<G<<I<<T<<endl;
    A=A/3;
    R=R/2;

    cout<<min(min(min(min(min(M,G),I),T),R),A)<<endl;


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
    test();
    //solve();
}
/*
Sample Input
5
MARGARITA
AAAAAAMMRRTITIGGRRRRRRRR
AMARGITA
BOLOGNESACAPRICHOSATOMATERA
ABCDEFGHIJKLMNOPQRSTUVWXYZ

Sample Output
1
2
0
1
0
*/
