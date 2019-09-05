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
	
	int n,m,g;
	cin>>n>>m>>g;
	int a[m],t[n];

	for(int i=0;i<n;i++)	
		cin>>t[i];
	for(int i=0;i<m;i++)
		cin>>a[i];

	int b[n-1];
	for(int i=0;i<n-1;i++)
		b[i]=t[i+1]-t[i];

	int c=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<n-1;j++)
			if(a[i]<=b[j])
			{
				c++;
				break;
			}
	cout<<c<<"\n";
	
	return 0;
}