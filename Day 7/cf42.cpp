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
	
	string s;
	cin>>s;

	int c=0,n=s.size();
	for(int i=0;i<s.size()/2;i++)
	{
		if(s[i]!=s[n-1-i])
			c+=1;
		if(c==2)
			break;

	}
	if(c==1 || (c==0 && n%2==1))
		cout<<"YES\n";
	else
		cout<<"NO\n";
return 0;
}