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
	s1+=*s.begin();
	if(s.size()%2==0)
	{
		int i;
		for(i=1;i<n;i++)
		{
			if(i%2)
				s1+=s[i];
			else
				s1.insert(s1.begin(),s[i]);
		}
	}
	else
	{
		int i;
		for(i=1;i<n;i++)
		{
			if(i%2)
				s1.insert(s1.begin(),s[i]);
			else
				s1+=s[i];
		}
	}
	cout<<s1<<"\n";
	
return 0;
}