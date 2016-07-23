#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
ll power(ll a, ll b) {
	if(!b) return 1;
	ll r = power(a, b/2);
	r = r*r;
	if(b%2) r = r*a;
	return r;
}