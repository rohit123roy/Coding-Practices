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
	
	string s;
	cin>>s;

	multimap<string,int> m;

	int i=0;
	int c=-1;
	if(s.size()>100000)
	{
		cout<<-1<<"\n";
		return 0;
	}
	while(s[i])
	{
		if((s[i]-'0')%2==0)
		{
			if(s[i]<s.back())
			{
				swap(s[i],s.back());
				cout<<s<<"\n";
				return 0;
			}
			else
				c=i;
		}
		i++;
	}
	if(c>=0)
	{
		swap(s[c],s.back());
		cout<<s<<"\n";
	}
	if(c==-1)
		cout<<-1<<"\n";


return 0;
}