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
		string s;
		cin>>s;
		int sum=0;
		
		set<char> s1(s.begin(),s.end());
		for(auto x:s1)
			sum+=x-'0';
		cout<<sum<<"\n";
	}    
	
	return 0;
}
