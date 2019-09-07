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
	
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s;

		int i=0,sum=0;
		while(s[i])
			sum+=s[i++]-'0';
		cout<<sum<<"\n";

	}	
	
return 0;
}