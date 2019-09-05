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
		int c=0;
		cin>>s;
		for(auto x:s)
		{
			if(x>=65 && x<=90 || x>=97 && x<=122)
				c++;
		}
		cout<<c<<"\n";
	}	
	
return 0;
}