/***********************
  Author : rohitroy
************************/

#include "bits/stdc++.h"
using namespace std;

#define ll long long

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);	
	
	string s,t;
	cin>>s>>t;
	reverse(t.begin(),t.end());
	if(s.compare(t)==0)
		cout<<"YES"<<"\n";
	else
		cout<<"NO"<<"\n";
	
return 0;
}