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
		
		ll a[2*n];
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
		}
		ll sum1=0;
		for(int i=0;i<n;i=i+2)
		{
			sum1=sum1+(ll)abs(a[i+2]-a[i]);
		}
		ll sum2=0;
		for(int i=1;i<n;i=i+2)
		{
			sum2=sum2+(ll)abs(a[i+2]-a[i]);
		}
		ll sum=sum1+sum2;
		cout<<sum<<"\n";
	}
	
	return 0;
}

