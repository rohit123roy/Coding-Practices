/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	string s,s1;
	getline(cin,s);
	cin>>s1;
	
	string::size_type found=s.find(s1);

	while(found!=string::npos)
	{
		cout<<"Pattern found at index "<<found<<"\n";
		found=s.find(s1,found+1);
	}
	}
	
	
	return 0;
}

