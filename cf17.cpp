/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	int x=n;
	while(x>0)
	{
		int y=x%10;
		if(y==4 || y==7)
				x=x/10;
		else
		{
			cout<<"NO\n";
			return 0;
		}
		
	}
	cout<<"YES\n";
	
	return 0;
}

