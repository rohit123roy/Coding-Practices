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
	
	int n;
	cin>>n;

	while(n--)
	{
		string s;
		cin>>s;

		sort(s.begin(),s.end());
		set<char> s1(s.begin(),s.end());
		if(s.back()-s.front()+1==s.size() && s1.size()==s.size())
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}	
	
return 0;
}