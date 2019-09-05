/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long
struct a
{
	int s,f,l;
};

void bsort(struct a *arr,int n)
{
	for(int i=0;i<n;i++)
	    for(int j=0;j<n-i-1;j++)
	    {
	    	if(arr[j].f>arr[j+1].f){
	    		int temp=arr[j].f;
	    		arr[j].f=arr[j+1].f;
	    		arr[j+1].f=temp;
			}
		}
}

void maxActivity(struct a *arr, int n)
{
	int i,j;
	j=0;
	cout<<"1 ";
	
	for(i=1;i<n;i++)
	{
		if(arr[i].s>=arr[j].f)
 		{
 			cout<<arr[j].l<<" ";
 			j=i;	
 		}
	}
}
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
		arr[i].l=i+1;
	}
	
	bsort(arr,n);
	
	maxActivity(arr,n);
	
	return 0;
}

