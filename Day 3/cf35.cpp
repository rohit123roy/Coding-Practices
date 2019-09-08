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
	
	int n,m;
	cin>>n>>m;

	map<string,string> mm;
	string s,s1,s2;
	vector<string> v;

	for(int i=0;i<m;i++)
	{
		cin>>s1>>s2;
		mm[s1]=s2;
	}

	for(int i=0;i<n;i++)
	{
		cin>>s1;
		int l1=s1.size(), l2=mm[s1].size();
		if(l1<=l2)
			cout<<s1<<" ";
		else
			cout<<mm[s1]<<" ";
	}
	cout<<"\n";
	
return 0;
}