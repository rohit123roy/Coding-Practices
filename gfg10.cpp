/**
* author : rohitroy
**/
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
		int l=s.length();
		while(l>=1)
		{
			cout<<s<<"\n";
			s.erase(l-1);
			l--;
		}
	}	
	
	return 0;
}