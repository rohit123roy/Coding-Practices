/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long



int part(int *a,int p,int r)
{
	int i,j;
	int key=a[r-1];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(*(a[j]<key)
		{
			i++;
			int t=(*a)[j];
			*(a)[j]=(*a)[i];
			*(a)[i]=t;
		}
	}
	*(a)[j-1]=*(a)[i+1];
	*(a)[i+1]=key;
	

	return i+1;
}

void quicksort(int *a, int p,int r)
{
	int q=part(a,p,r);
	quicksort(a,p,q-1);
	quicksort(a,q+1,r);
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
	quicksort(a,0,n);
	i=0;
	while(i<n)
	cout<<a[i++]<<" ";
	return 0;
}
