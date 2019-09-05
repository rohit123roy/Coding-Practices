/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

int binarysearch(int *a, int l, int r, int t)
{
	int m;
	while(l<r)
	{
		m=(l+r)/2;
		if(a[m]==t)
			return m+1;
		else if(l<m)
			r=m;
		else
			l=m+1;
	}
	return 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int n,i=0,t,m;
	cin>>n;
	int a[n];
	while(i<n)
		cin>>a[i++];
	cin>>t;
	if(m=binarysearch(a,0,n-1,t))
		cout<<m<<"\n";
	else
		cout<<"Not found\n";
	return 0;
}