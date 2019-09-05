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
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,t=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n-1;i++)
		    cin>>a[i];
		sort(a,a+(n-1));
		for(int i=0;i<n && a[i]==++t;i++);
		cout<<t<<endl;
	}
	
	return 0;
}
