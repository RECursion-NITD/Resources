#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
string getBinary(ll num) {
	string bin;
	while(n) {
		bin += (n&1)+'0';
		n/=2;
	}
	return bin;
}