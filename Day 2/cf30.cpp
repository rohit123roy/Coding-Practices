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
	int n;
	cin>>n;
	string s;
	cin>>s;

	int n1,n2;
	n1=count(s.begin(),s.end(),'A');
	n2=count(s.begin(),s.end(),'D');
	if(n1>n2)
		cout<<"Anton"<<"\n";
	else if(n1<n2)
		cout<<"Danik"<<"\n";
	else
		cout<<"Friendship\n";
	
return 0;
}