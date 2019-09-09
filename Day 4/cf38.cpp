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

	string s,s1;
	cin>>s;

	vector<string> v;
	for(int i=0;i<n-1;i++)
	{
		s1.append(s.begin()+i,s.begin()+i+2);
		v.push_back(s1);
		s1.clear();
	}
	set<string> str(v.begin(),v.end());

	int c=0;
	for(auto it:str)
	{
		int x=count(v.begin(),v.end(),it);
		if(x>=c)
		{
			c=x;
			s1=it;
		}
	}
	cout<<s1<<"\n";

	
return 0;
}