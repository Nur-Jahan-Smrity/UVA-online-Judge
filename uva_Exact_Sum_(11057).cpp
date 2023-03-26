//D:\all codes\uva_Exact_Sum_11057.cpp
//binary search is always done in sorted array ..
//this code is implemented for array where there is no repeated digit..
//use lower_bound to overcome repeated digit..
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
//int j=0;
ll arr[100005];
void printArr(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i] << ' ';
    }
    cout<< endl;
}

void solve()
{
    long long n,k,i,j,countt=0,store,ss,s1,s2,sp;
    while(cin>>n)
    {
        memset(arr,0,sizeof(arr));
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr + n);
        cin>>k;
        //printArr(n);
        ll minn=99999999;
        for(i=0; i<n; i++)
        {
            store=k-arr[i];

            ss=binary_search(arr,arr + n, store);
            if (ss == false){
                continue;
            }
            sp=abs(store-arr[i]);
            if(sp<minn )
            {
                minn=sp;
                s1=arr[i];
                s2=store;
            }

            //Peter should buy books whose prices are 4 and 6.
            store=0,ss=0;
        }
        cout<<"Peter should buy books whose prices are "<<s1<<" and "<<s2<<"."<<endl;
        cout<<endl;
    }

    /* if(countt)
     {
         cout<<"found"<<endl;
     }
     else
         cout<<"not found"<<endl;*/

}

void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        memset(arr,0,sizeof(arr));
        solve();

    }

}
/*
Bitwise Operators in C/C++
  & (bitwise AND)
  | (bitwise OR)
  ^ (bitwise XOR)
  << (left shift)
  >> (right shift)
  ~ (bitwise NOT)
*/
int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    // test();
    solve();
}
/*

Sample Input
2
40 40
80
5
10 2 6 8 4
10
Sample Output
Peter should buy books whose prices are 40 and 40.
Peter should buy books whose prices are 4 and 6.






*/



/*
5
8 9
5 9 7 6 3 2 -5 8
-5 2 3 5 6 7 8 9
found
6 6
3 5 2 5 1 8
1 2 3 5 5 8
not found
3 4
2 4 6
2 4 6
found
5 5
1 4 2 3 6
1 2 3 4 6
not found
6 8
1 8 2 5 7 2
1 2 2 5 7 8
found
*/
