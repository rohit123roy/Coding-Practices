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
	
	int n,i=0,sum=0;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	sort(a,a+n,greater<int>());
	int avg=sum/2;
	sum=0,i=0;
	while(sum<=avg)
		sum=sum+a[i++];

	cout<<i<<"\n";

	return 0;
}