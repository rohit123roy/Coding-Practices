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
	
	string s1,s2;
	
	cin>>s1>>s2;
	int l1=s1.size();
	int l2=s2.size();
	int a1[s1.size()], a2[s2.size()];
	char *c=(char*)malloc(10*sizeof(char));

	for(int i=0;s1[i];i++)
		a1[i]=s1[i]-'0';
	for(int i=0;s2[i];i++)
		a2[i]=s2[i]-'0';

	int carry=0;
	int x,l=0;

	if(l1>=l2)
	{
		int a[l1+1];
		int k=l2;
		while(k--)
		{
			x=a1[l1]+a2[k];
			if(x>=10)
			{
				a[l1--]=x%10;
				carry=x/10;
			}
			else
			{
				a[l1--]=x;
				carry=0;
			}
		}
		while(l1)
		{
			a[l1]=carry+a1[l1--];
			carry=0;
		}
		int i=0;
		while(a[i])
		{
			c[i]=(char)a[i];
			i++;
		}
		for(int j=0;j<i;j++)
			cout<<c[j];
		cout<<"\n";
	}
	else
	{
		int a[l2+1];
		int k=l1;
		while(k--)
		{
			x=a1[k]+a2[l2];
			if(x>=10)
			{
				a[l2]=x%10;
				carry=x/10;
				l2--;
			}
			else
			{
				a[l2]=x;
				carry=0;
				l2--;
			}
		}
		while(l2)
		{
			a[l2]=carry+a2[l2];
			l2--;
			carry=0;
		}
		int i=0;
		while(a[i])
		{
			c[i]=(char)a[i];
			i++;
		}
		for(int j=0;j<i;j++)
			cout<<c[j];
		cout<<"\n";
	}
	
	return 0;
}