/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long
struct a
{
	int s,f;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	struct a arr[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].s>>arr[i].f;
	}
	sort(arr,arr+n)
	
	
	return 0;
}

