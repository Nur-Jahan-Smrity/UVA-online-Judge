//uva_throwing_cards_away_1_(10935).cpp
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
 int n,m,i,j,k=0,temp=0;
 while(cin>>n)
 {
     if(n==0)
        break;

     queue<int>qe1;
     queue<int>qe2;
     for(i=0;i<n;i++)
     {
         qe1.push(i+1);
     }
     for(i=0;i<n-1;i++)
     {
        qe2.push(qe1.front());
        qe1.pop();
        qe1.push(qe1.front());
        qe1.pop();
     }
     cout<<"Discarded cards:";
     for(i=0;i<n-1;i++)
     {
       cout<<" "<<qe2.front();
       if(i!=n-2)
        cout<<",";
       qe2.pop();
     }
     cout<<endl;
     cout<<"Remaining card: "<<qe1.front()<<endl;
 }
}
/*void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        solve();
    }

}*/
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // test();
    solve();
}
/*
Sample Input
7
19
10
6
0
Sample Output
Discarded cards: 1, 3, 5, 7, 4, 2
Remaining card: 6
Discarded cards: 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 4, 8, 12, 16, 2, 10, 18, 14
Remaining card: 6
Discarded cards: 1, 3, 5, 7, 9, 2, 6, 10, 8
Remaining card: 4
Discarded cards: 1, 3, 5, 2, 6
Remaining card: 4
*/
