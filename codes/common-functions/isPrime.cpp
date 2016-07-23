#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
bool isPrime(ll a)
{
    if(a==0 || a==1) return false;
    if(a==2 || a==3) return true;

    ll sqr = sqrt(a);
    for(ll i=2;i<=sqr;i++)
    {
        if(isprime(i) && a%i==0) return false;
    }
    return true;
}