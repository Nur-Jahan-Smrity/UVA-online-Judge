//uva_10042_Smith Numbers.cpp
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int prime[3000000], nPrime;
int mark[10000002];

void sieve(int n)
{
    int i, j, limit = sqrt(n * 1.) + 2;
    //mark=1 (not prime) ..
    //mark=0  (prime) ..
    mark[1] = 1;
    mark[2] = 0;
    prime[nPrime++] = 2;
    for(int i = 4; i <= n; i += 2)
        mark[i] = 1;

    for(i = 3; i <= n; i+=2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j+= i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

ll sumOfDigits(ll n)
{
    ll sum = 0;
    while(n)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(int i = 0; prime[i] * prime[i] <= n && i < nPrime; i++)
    {
        while(n % prime[i] == 0)
        {
            factors.push_back(prime[i]);
            n /= prime[i];
        }
    }
    if(n > 1)
    {
        factors.push_back(n);
    }
    return factors;
}

bool isSmithNumber(ll n)
{
    ll sum1 = sumOfDigits(n);
    vector<ll> factors = primeFactors(n);
    ll sum2 = 0;
    for(auto f : factors)
    {
        sum2 += sumOfDigits(f);
    }
    //to check n is composite .. n has more then 1 prime number ...
    return sum1 == sum2 && factors.size() > 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve(100005);

    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        while(!isSmithNumber(++n));
           cout << n << endl;
    }

    return 0;
}
