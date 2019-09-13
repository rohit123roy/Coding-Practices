/***********************
  Author : rohitroy
************************/

#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	ll n,c=0;
	cin>>n;

	string s;
	cin>>s;

	for(ll i=0;i<n;i++)
	{
		if((s[i]-'0')%2==0)
			c+=i+1;
	}
	cout<<c<<"\n";
	
return 0;
}