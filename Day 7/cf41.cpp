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
	
	string s1,s2;
	cin>>s1>>s2;
	int l1=s1.length();
	int l2=s2.length();

	if(l1!=l2)
	{
		if(l1>l2)
			cout<<l1<<"\n";
		else
			cout<<l2<<"\n";
	}
	else
	{
		if(s1==s2)
			cout<<-1<<"\n";
		else
		{
			cout<<l1<<"\n";
		}
	}

		
	
return 0;
}