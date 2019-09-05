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
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n);
		int x=n/2;
		int c=0;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]==a[i])
				++c;
			else 
				c=0;
			if(c==x)
			{
				cout<<a[i]<<endl;
				break;
			}
		}
		if(c!=x)
			cout<<-1<<endl;
	}	
	
	return 0;
}