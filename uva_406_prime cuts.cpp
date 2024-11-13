//uva_406_prime cuts
#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool check_prime(ll a)
{
    bool ans=true;
    long long int store=sqrt(a),i;
    for(i=2; i<=store; i++)
    {
        if(a%i==0)
        {
            ans=false;
            break;
        }
    }
    return ans;
}

int main()
{
    ll n,c,i;
    while(cin>>n>>c)
    {
        ll count=0,ans=0;
        vector<long long int>v;
        for(i=1; i<=n; i++)
        {
            bool check=check_prime(i);
            if(check)
            {
                v.push_back(i);
            }
        }
        // Step 1: Done
        /*
        for(int i = 0; i < v.size(); i++) {
            cout<< v[i] << " ";
        }
        cout<< endl;
        */
        count = v.size();
        if(count%2==0)
        {
            ans=2*c;

            int half=count-ans;
            half=half/2;
             if(ans >= count) {
                half = 0;
            }
            cout<<n<<" "<<c<<": ";
            for(i=half; i<count - half - 1; i++)
            {
                cout<<v[i]<<" ";
            }
             cout << v[count - half - 1];
            cout<<endl<<endl;
           // cout<<v[half+ans]<<endl;
        }
        else
        {
            ans=(2*c)-1;
            //cout<<ans<<endl;
            int half=count-ans;
           // cout<<half<<endl;
            half=half/2;
            //cout<<half<<endl;
            if(ans >= count) {
                half = 0;
            }
            cout<<n<<" "<<c<<": ";
            for(i=half; i<count - half - 1; i++)
            {
                cout<<v[i]<<" ";
            }
            cout << v[count - half - 1];
             cout<<endl<< endl;
        }
    }

}
/*
Sample Input
21 2
18 2
18 18
100 7
Sample Output
21 2: 5 7 11
18 2: 3 5 7 11
18 18: 1 2 3 5 7 11 13 17
100 7: 13 17 19 23 29 31 37 41 43 47 53 59 61 67
*/
