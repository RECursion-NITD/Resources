#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
bool isPalindrome(string str) {
	ll n = str.size();
	for(ll i=0; i<n/2;i++) {
		if(str[i]!=str[n-1-i]) return false;
	}
	return true;
}