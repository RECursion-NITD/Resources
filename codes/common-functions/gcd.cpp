#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
ll gcd(ll a, ll b) {
	if(!b) return a;
	return gcd(b, a%b);
}