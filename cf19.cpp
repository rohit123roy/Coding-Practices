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
	
	int n,res=0;
	cin>>n;
	int a[n];
	int b[]={0,0,0,0};
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]-1]++;
	}
	//sort(a,a+n,greater<int>());
	if(b[2]>b[1])
	{
		if(b[1]==1)
			res=b[3]+b[2]+1;
		else
			res=b[3]+b[2]+ceil(b[1]/2);
	}
	else
	{
		if((b[0]+b[1]*2)<=4)
			res=b[3]+b[2]+1;
		else
			res=b[3]+b[2]+ceil(((b[0]-b[2])+b[1]*2)/4);
	}
	cout<<res<<"\n";
	return 0;
}