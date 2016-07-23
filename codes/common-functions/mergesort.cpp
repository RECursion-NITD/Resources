#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
void merge(vector<ll> &a,ll lb,ll mid,ll ub) {
    vector<ll> c;
    ll lp = lb,up = mid + 1;
    while(lp <= mid && up <= ub) {
        if(a[lp] < a[up])
            c.push_back(a[lp++]);
        else
            c.push_back(a[up++]);
    }
    while(lp<=mid)
    	c.push_back(a[lp++]);
    while(up<=ub)
    	c.push_back(a[up++]);

    for(int j=0;j<c.size();j++)
    	a[j+lb]=c[j];
}
void mergesort(vector<ll> &a,ll lb,ll ub)
{
    ll mid=(lb+ub)/2;
    if(lb<ub) {
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}