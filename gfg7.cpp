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
		int i=0,c=0;
		while(s[i])
		{
			if(s[i++]<=90)
				c++;
		}
		cout<<c<<"\n";
	} 

	
	return 0;
}