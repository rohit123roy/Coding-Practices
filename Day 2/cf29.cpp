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

	int i=0;
	int c1=0,c2=0;
	while(s[i])
	{
		if(islower(s[i]))
			c1++;
		else
			c2++;
		i++;
	}
	if(c1>=c2)
	{
		transform(s.begin(),s.end(),s.begin(),::tolower);
		cout<<s<<"\n";
	}
	else
	{
		transform(s.begin(),s.end(),s.begin(),::toupper);
		cout<<s<<"\n";
	}

return 0;
}