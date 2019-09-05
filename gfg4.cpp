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
	
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int a[n],sum=0;

		int b[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
			b[i]=sum-a[i];
		}
		sum=0;
		for(int j=n-1;j>=0;j--)
		{
			sum+=a[j];
			c[j]=sum-a[j];
		}
		int i;
		for(i=0;i<n;i++)
		{
			if(b[i]==c[i])
			{
				cout<<i+1;
				break;
			}
		}
		if(i==n)
			cout<<-1;
		cout<<endl;
	}	
	return 0;
}