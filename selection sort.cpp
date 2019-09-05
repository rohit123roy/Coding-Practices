/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;
void sort2(int *a, int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
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
	sort2(a,n);
	i=0;
	while(i<n)
	cout<<a[i++]<<" ";
	return 0;
}
