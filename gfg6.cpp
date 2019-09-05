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
	cout.tie(0);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		while(d--)
		{
			int f=a[0];
			for(int i=1;i<n;i++)
				a[i-1]=a[i];
			
			a[n-1]=f;
		}
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
			
		cout<<endl;
	}
	return 0;
}

