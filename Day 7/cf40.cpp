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
	
	int n,i=0,c=0,l=0;
	cin>>n;

	string s,s1;
	cin>>s;
	
	while(s[i])
	{
		if(s[i]=='x')
			l++;
		else
			l=0;
		if(l>2)
			c++;
		i++;
	}
	cout<<c<<"\n";
	
return 0;
}