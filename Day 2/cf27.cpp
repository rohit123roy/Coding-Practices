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

	int n=s.size();
	int i=0,c=0;

	while(s[i])
	{
		if(s[i++]<=90)
			c++;
	}
	if(c==s.size())
		transform(s.begin(),s.end(),s.begin(),::tolower);
	if(islower(s[0]) && c==n-1)
	{
		s[0]=s[0]-32;
		transform(s.begin()+1,s.end(),s.begin()+1,::tolower);
	}
	cout<<s<<"\n";

	
	
	

	return 0;
}