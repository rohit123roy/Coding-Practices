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
	
	int n;
	cin>>n;
	vector<string> v;
	string s1;
	for(int i=0;i<n;i++)
	{
		cin>>s1;
		v.push_back(s1);

	}
	set<string> s(v.begin(),v.end()); 

	for(auto x:s)
		cout<<x<<" "<<count(v.begin(),v.end(),x)<<"\n";
	
	return 0;
}