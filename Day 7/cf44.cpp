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
		int n;
		cin>>n;

		string s;
		cin>>s;

		if(n>=11)
		{
			if(n==11)
			{
				if(s[0]=='8')
					cout<<"YES\n";
				else
					cout<<"NO\n";
			}

			else
			{
				if(s.find('8')<=n-11)
					cout<<"YES\n";
				else
					cout<<"NO\n";
			}
		}
		else
			cout<<"NO\n";
	}
		
	
return 0;
}