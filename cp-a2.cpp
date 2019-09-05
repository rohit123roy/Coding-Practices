/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

 ll bigpow(ll a, ll b, ll m)
{
	a%=m;
	ll res=1;
	while(b>0)
	{
		if(b & 1)
			res=res*a % m;
		a=a*a % m;
	}
	return res;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	ll a,b;
	ll m=11;
	cin>>a>>b;
	cout<<bigpow(a,b,m);	
	
	return 0;
}