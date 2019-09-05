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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		
		for(int i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
				cout<<a[i+1]<<" ";
			else cout<<-1<<" ";
		}
		cout<<-1<<"\n";
	}
	
	return 0;
}

