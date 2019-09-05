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
	cout.tie(0);	
	
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1,s2,s3;
		cin>>s;
		for(auto x:s)
		{
			if(x>=48 && x<=57)
				s2+=x;
			else if(x>=65 && x<=122)
				s1+=x;
			else
				s3+=x;
		}
		cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n";

	}	
		
	
	return 0;
}