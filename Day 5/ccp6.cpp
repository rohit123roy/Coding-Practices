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
		string s1,s2;
		cin>>s1>>s2;
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.begin());
		if(s1==s2)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
		
	
return 0;
}