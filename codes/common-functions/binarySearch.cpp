#include<bits/stdc++.h>
#define ll long long int
//change "long long int" to "int" if you don't want to use long long
using namespace std;
ll binarySearch(vector<ll> A, ll low, ll high, ll B) {
    if(low<=high) {
        ll mid = (low+high)/2;
        if(A[mid]==B) return mid;
        if(A[mid]<B) return binarySearch(A, mid+1, high, B);
        return binarySearch(A, low, mid-1, B);
    }
    return -1;   
}