/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

void merge(int *a, int p,int q, int r)
{
	int i,j;
	int n1=q-p+1;
	int n2=r-q;
	int b[n1],c[n2];

	for(i=0;i<n1;i++)
		b[i]=a[p+i];
	for(j=0;j<n2;j++)
		c[j]=a[q+1+j];
	int k=p;
	i=j=0;
	while(i<n1 && j<n2)
	{
		if(b[i]<c[j])
			a[k]=b[i++];
		else
			a[k]=c[j++];
		k++;
	}
	while(i<n1)
		a[k++]=b[i++];
	while(j<n2)
		a[k++]=c[j++];
}

void mergesort(int *a, int p, int r)
{
	if(p<r)
	{
		int q=p+(r-p)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	int n,i=0;
	cin>>n;
	int a[n];
	while(i<n)
		cin>>a[i++];
	mergesort(a,0,n-1);
	i=0;
	while(i<n)
		cout<<a[i++]<<" ";
	return 0;
}