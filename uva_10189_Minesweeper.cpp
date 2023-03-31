//uva_10189_Minesweeper.cpp
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
    long long i,j,sum=0,n,m,count=0,k=1, l =0;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
            break;
        if(l){
            cout<<endl;
        }
        l = 1;

        char a[105][105],b[105][105];
        memset(a, '0', sizeof(a)); // set all indices of a to '0'
        memset(b, '0', sizeof(b)); // set all indices of b to '0'
        /*for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                a[i][j] = '\0';
                b[i][j] = '\0';
            }
        }*/
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cin>>a[i][j];

            }
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                if(a[i][j]=='*')
                {
                    b[i][j]='*';
                    continue;
                }
                else
                {
                    if(a[i-1][j-1]=='*')
                    {
                        count++;
                    }
                    if(a[i-1][j]=='*')
                    {
                        count++;
                    }
                    if(a[i-1][j+1]=='*')
                    {
                        count++;
                    }
                    if(a[i][j-1]=='*')
                    {
                        count++;
                    }
                    if(a[i][j+1]=='*')
                    {
                        count++;
                    }
                    if(a[i+1][j-1]=='*')
                    {
                        count++;
                    }
                    if(a[i+1][j]=='*')
                    {
                        count++;
                    }
                    if(a[i+1][j+1]=='*')
                    {
                        count++;
                    }
                }
                //cout<<char(count);
                b[i][j]=count+'0';
                count=0;
            }
        }
        //Field #1:
        cout<<"Field #"<<k<<":"<<endl;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                cout<<b[i][j];
            }
            cout<<endl;

        }
        k++;

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
4 4
*...
....
.*..
....
3 5

**...
.....
.*...
0 0

Sample Output
Field #1:
*100
2210
1*10
1110
Field #2:
**100
33200
1*100
*/
