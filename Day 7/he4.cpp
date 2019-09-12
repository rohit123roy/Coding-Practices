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
		string s;
		cin>>s;
		int c=0,n=s.size();
		for(int i=0;i<n/2;i++)
		{
			if(s[i]=='(' && s[n-i-1]==')')
				c+=2;
			else
				break;
		}
		cout<<c<<"\n";
	}	
	
return 0;
}