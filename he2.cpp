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

	int n;
	cin>>n;

	while(n--)
	{	
		string s;
		cin>>s;
		int i=0,c=0;
		while(s[i])	
		{
			if((s[i] =='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'))
				c++;
			i++;
		}
		cout<<c<<"\n";
	}
	return 0;
}