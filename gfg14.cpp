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
		for(auto x:s)
		{
			cout<<(char)(x-32);
		}
		cout<<"\n";
	}	
	
return 0;
}