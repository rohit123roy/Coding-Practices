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

	string s;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);

	for(char c='a';c<='z';c++)
	{
		if(s.find(c)==string::npos)
		{
			cout<<"NO"<<"\n";
			return 0;	
		}
	}
	cout<<"YES\n";	
	
return 0;
}