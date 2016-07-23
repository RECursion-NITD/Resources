/**Call sieve in the main function to initialize the sieve a.
This should be done only once before taking inputs for segmented sieve.**/

#include<bits/stdc++.h>
#define ll long long int
#define MAX_SIZE 100000
using namespace std;
vector<ll> a;
void sieve()
{
    a  = vector<ll>(MAX_SIZE, 1);
    a[0]=a[1]=0;
    for(ll i=2;i<=MAX_SIZE;i++)
    {
        if(a[i])
        {
            for(ll j=i*2;j<=MAX_SIZE;j+=i)
            {
                a[j]=0;
            }
        }
    }
}
vector<ll> segmentedSieve(ll start, ll end)
{
    vector<ll> b(end-start+1, 1), ans;
    ll sqr = sqrt(end), tmp, i, j;
    if(start==1) b[0]=0;
    for(ll i=2; i<=sqr; i++)
    {
        tmp=(start/i);
        tmp*=i;
        if(i>=tmp) tmp=i*2;
        for(ll j=tmp; j<=end; j+=i)
        {
           if(j>=start) b[j-start]=0;
        }
    }
    for(i=start;i<=end;i++)
        if(b[i-m])
            ans.push_back(i);
    return ans;
}