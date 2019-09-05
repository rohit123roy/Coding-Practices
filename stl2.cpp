/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

struct interval
{
	int start,end;
};

bool compareInterval(interval i1, interval i2)
{
	return(i1.start > i2.start);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	struct interval a[10];

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>a[i].start>>a[i].end;
	}

	sort(a,a+n,compareInterval);
	
	for(int i=0;i<n;i++)
		cout<<a[i].start<<","<<a[i].end<<"\n";
	return 0;
}