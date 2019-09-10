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
	
	int n,c=0;
	cin>>n;
	map<string,int> m;
	
	string s1;

	while(n--)
	{
		string s;
		cin>>s;
		m[s]++;
		if(m[s]>c)
		{
			c=m[s];
			s1=s;
		}
	}
	cout<<s1<<"\n";	
	
return 0;
}