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
	
	int sum=0,i=0;

	string s;
	cin>>s;
	int x;

	char c='a';
	while(s[i])
	{
		x=abs(s[i]-c);
		sum+=min(x,26-x);
		c=s[i++];
	}
	cout<<sum<<"\n";
return 0;
}