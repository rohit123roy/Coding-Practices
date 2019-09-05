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
		string s,s1;
		cin>>s;
		reverse(s.begin(),s.end());
		cout<<s<<"\n";
	}	
	
	return 0;
}