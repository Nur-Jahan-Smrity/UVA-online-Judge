//uva_10474
//solved without using library function ...
#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0,l=1;
ll arr[100005],q[100005];
void printArr(int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i] << ' ';
    }
    cout<< endl;
}
int binary_search(ll n, ll k)
{
    ll b=0,e=n-1,mid=0,cc=0;
    while(b<=e)
    {
        // printf("CH\n");
        mid= b + (e - b) / 2;
        if(k==arr[mid])
        {

            return mid + 1;

        }
        else if(q[j]>arr[mid]){
         b = mid + 1;
        // cout<< arr[b] << "Found " << endl;
        }
        else
            e=mid-1;
    }
    return -1;
    /*
    if(cc==0)
    {

        cout<<q[j]<<" not found"<<endl;
    }*/
}
void solve()
{
    long long n,k,i,countt=0;
    int o = 0;
    while(cin >> n >> k)
    {
        o++;

        memset(arr,0,sizeof(arr));
        memset(q,0,sizeof(q));

        if(n==0 && k==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<"CASE# "<<o<<":"<<endl;
        sort(arr, arr + n);
        for(j=0; j<k; j++)
        {
            cin>>q[j];
            int x= q[j];
           int ans = binary_search(n, x);
           if(ans == -1){
             cout << x << " not found" << endl;
              //int ans = lower_bound(arr, arr + n, x) - arr;
                 //lower_bound(v.begin(), v.end()) - v.begin();
              // cout<< ans << endl;
           }
           else{
                int ans = lower_bound(arr, arr + n, x) - arr;
                 //lower_bound(v.begin(), v.end()) - v.begin();
             //  cout<< ans << endl;
            cout << x <<  " found at " << ans + 1 << endl;
           }

        }
    }
    // printArr(n);
    //binary_search(n);
    /* if(countt)
     {
         cout<<"found"<<endl;
     }
     else
         cout<<"not found"<<endl;*/

}

/*void test()
{
    long long t;
    cin>>t;

    while(t--)
    {
        memset(arr,0,sizeof(arr));
        memset(q,0,sizeof(q));
        //CASE# 1:
        cout<<"CASE# "<<l<<":"<<endl;
        l++;
        solve();

    }

}
*/
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
    //test();
    solve();
}
/*
Sample Input
4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0
Sample Output
CASE# 1:
5 found at 4
CASE# 2:
2 not found
3 found at 3

//exceptional case : 3 3 3 3
3 er position wrong show kore
*/



















//used inbuilt library function ..

#include<bits/stdc++.h>
// reverse(s.begin(), s.end());
using namespace std;
typedef long long ll;
int j=0,l=1;
ll arr[100005],q[100005];
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
    long long n,k,i,countt=0;
    int o = 0;
    while(cin >> n >> k)
    {
        o++;

        memset(arr,0,sizeof(arr));
        memset(q,0,sizeof(q));

        if(n==0 && k==0)
            break;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        cout<<"CASE# "<<o<<":"<<endl;
        sort(arr, arr + n);
        for(j=0; j<k; j++)
        {
            cin>>q[j];
            int x= q[j];
           int ans = binary_search(arr, arr + n, x);
           if(ans == false){
             cout << x << " not found" << endl;
              //int ans = lower_bound(arr, arr + n, x) - arr;
                 //lower_bound(v.begin(), v.end()) - v.begin();
              // cout<< ans << endl;
           }
           else{
                int ans = lower_bound(arr, arr + n, x) - arr;
                 //lower_bound(v.begin(), v.end()) - v.begin();
             //  cout<< ans << endl;
            cout << x <<  " found at " << ans + 1 << endl;
           }

        }
    }
   

}



int main()
{


    //int n = sizeof(arr) / sizeof(arr[0]);
    //test();
    solve();
}

