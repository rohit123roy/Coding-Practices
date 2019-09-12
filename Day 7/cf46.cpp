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
	map<string,int> m1={{"rat",1},{"woman",2},{"child",2},{"man",3},{"captain",4}};

	multimap<int,string> m2;
	while(n--)
	{
		string s1,s2;
		cin>>s1>>s2;
		m2.insert(pair<int,string>(m1[s2],s1));
	}
	for(auto x:m2)
		cout<<x.second<<"\n";	
	
return 0;
}