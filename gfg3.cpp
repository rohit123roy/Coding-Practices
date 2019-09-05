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
		int n,k=0;
		cin>>n;

		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		b[k]=a[n-1];
		int max=b[k++];
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>=max)
			{
				b[k++]=a[i];
				max=a[i];
			}
		}

		for(int i=k-1;i>=0;i--)
			cout<<b[i]<<" ";
		cout<<endl;
	}	
	
	return 0;
}