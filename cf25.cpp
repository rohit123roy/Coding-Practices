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
	
	char c[10]="HQ9";
	char a;
	while(cin>>a)
	{
		if(strchr(c,a))
		{
			cout<<"YES\n";
			return 0;
		}
	}
	cout<<"NO\n";	
	return 0;
}