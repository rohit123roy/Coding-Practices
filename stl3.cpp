/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long 

long long bigpow2(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	ll a,b;
	cin>>a>>b;

	cout<<bigpow2(a,b)<<"\n";
return 0;
}