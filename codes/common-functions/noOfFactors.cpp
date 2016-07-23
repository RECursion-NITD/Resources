#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll noOfFactors(ll n) {
	ll factors = n;
	for (ll i=2; i*i<=n; i++)
		if (n%i == 0) {
			while (n%i == 0)
				n/=i;
			factors -= factors/i;
		}
	if (n > 1)
		factors -= factors/n;
	return factors;
}