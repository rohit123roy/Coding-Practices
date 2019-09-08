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
	
	string s1,s2,s3;
	cin>>s1>>s2>>s3;

	string s=s1+s2;

	if(s.size()==s3.size())
	{
		for(auto c:s)
		{		
			if(s3.find(c)==string::npos)
			{
				cout<<"NO\n";
				return 0;
			}
			s3.erase(s3.find(c),1);
		}

		cout<<"YES\n";
		return 0;
	}

	cout<<"NO\n";

	
return 0;
}