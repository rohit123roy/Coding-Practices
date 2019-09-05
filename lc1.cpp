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
	
	int l,r,p[10000];
	int k=0;
	cin>>l>>r;

	for(int i=l;i<=r;i++)
	{
		int flg=0;
		int a=i;
		while(a>0)
		{
			int rem=a%10;
			if(rem==0 || (i%rem !=0))
			{	
				flg=1;
				break;
			}
			a=a/10;
		}
		if(flg==0)
			p[k++]=i;
}
for(int i=0;i<k;i++)
	cout<<p[i]<<" ";
cout<<"\n";	
return 0;
}