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
	
	int n,a,b,cap=0,min=0;
	cin>>n;

	for(int i=1;i<=n;i++)
	{	
		cin>>a>>b;
		cap=cap-a+b;
		if(cap>min)
			min=cap;
	}
	
	cout<<min<<"\n";
	return 0;
}
