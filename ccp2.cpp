/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int c=0,i=1;
		while(s[i])
		{
			if(s[i]==s[i-1])
				c++;
			i++;
		}
		cout<<c<<"\n";

	}
	
	return 0;
}