//uva 10611 The Playboy Chimp
//lower bound & upper bound used ..
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
    long long n,i,j,count=0,k;

    while(cin >> n){
    ll a[n+10]= {0};

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll height,k;
    cin>>k;
    ll ss;
    for(i=0; i<k; i++)
    {
        cin>>height;
        ss=lower_bound(a,a+n,height)-a;
        //cout<<"low="<<ss<<endl;
        if(ss>=n)
            cout<<a[ss-1]<<" ";
        else if(ss==0)
            cout<<"X ";
        else if(a[ss]!=height && height>a[ss])
            cout<<a[ss]<<" ";
        else
            cout<<a[ss-1]<<" ";
        ll store=0;
        store = upper_bound(a,a+n,height)-a;
        //cout<<endl;
        //cout<<"up= "<<store<<endl;
        if(store>=n)
            cout<<"X"<<endl;
        else
            cout<<a[store]<<endl;
    }
    }

}
void test()
{
    long long t;
    //cout<<"test case : "<<endl;
    cin>>t;

    while(t--)
    {
        // j++;
        //cout<<"Case "<<j<<":"<<endl;
        solve();
    }

}

int main()
{
    //int n = sizeof(arr) / sizeof(arr[0]);
    // test();
    solve();
}
/*
Sample Input
4
1 4 5 7
4
4 6 8 10

4
1 2 3 4
4
1 2 3 4

Sample Output
1 5
5 7
7 X
7 X

X 2
1 3
2 4
3 X
*/
