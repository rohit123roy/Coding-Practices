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
	
	int n,a,b,c,x=0,y=0,z=0;
	cin>>n;

	while(n--)
	{
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	printf((x|y|z)?"NO\n":"YES\n");

	
	return 0;
}