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
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int k,n,w;
	cin>>k>>n>>w;
	int p=k*((w*(w+1))/2)-n;
	cout<<(p>=0?p:0)<<"\n";	
	
	return 0;
}