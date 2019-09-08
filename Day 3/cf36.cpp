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
	
	string s,s1="AB";
	cin>>s;
	string::size_type found1=s.find("AB");
	string::size_type found2=s.find("BA");

	if(s.find("AB")!=-1 && s.find("BA",s.find("AB")+2)!=-1 || s.find("BA")!=-1 && s.find("AB",s.find("BA")+2)!=-1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
		
	
return 0;
}