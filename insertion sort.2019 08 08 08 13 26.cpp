/**
* author : rohitroy
**/
void sort1(int *a, int n)
{
	int i,j,key;
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>a[i])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
}



#include "bits/stdc++.h"
using namespace std;
#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int n,i=0;
	cin>>n;
	int a[n];
	while(i<n)
		cin>>a[i++];
	sort1(a,n);
	i=0;
	while(i<n)
	cout<<a[]<<"\t";
	return 0;
}
