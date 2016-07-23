#include<bits/stdc++.h>
#define ll long long int
#define MAX_SIZE 100000
using namespace std;
vector<ll> a;
ll sieve()
{
    a  = vector<ll>(MAX_SIZE, 1);
    ll i,j;
    a[0]=a[1]=0;
    for(i=2;i<=MAX_SIZE;i++)
    {
        if(a[i])
        {
            for(j=i*2;j<=MAX_SIZE;j+=i)
            {
                a[j]=0;
            }
        }
    }
}