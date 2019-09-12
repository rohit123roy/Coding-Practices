/***********************
  Author : rohitroy
************************/

#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	int t;
	cin>>t;
	while(t--)
	{
		int n,a;
		cin>>n;
		vector<int> v;

		for(int i=0;i<n;i++)
		{
			cin>>a;
			v.push_back(a);
		}
		int max=*min(v.begin(),v.end());
		for(int i=0;i<n;i++)
		{
			int x=0;
			for(int j=i;j<n;j++)
			{
				x+=v[j];
				if(x>=max)
					max=x;
			}
		}
		cout<<max<<"\n";
	}
return 0;
}