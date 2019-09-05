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
	
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	cin>>m;
	int c[m];
	for(int i=0;i<m;i++)
		cin>>c[i];
	sort(a,a+n);
	sort(c,c+n);

	int b[100];
	int x,p=0,k=0;

	
	for(int i=0;i<=c[0];i++)
	{
		int flg=0;
		for(int j=0;j<m && k<n;j++)
		{
			if(c[j]==a[k]+i)
			{	
				flg=1;
				k++;
			}
			else 
			{
				flg=0;
				break;
			}
		}
		if(flg==1)
			b[p++]=i;
	}
	for(int i=0;i<p;i++)
		cout<<b[i]<<"\n";
	return 0;
}