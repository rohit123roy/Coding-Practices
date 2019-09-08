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

	map<string,int> m ={{"Tetrahedron",4},{"Cube",6},{"Octahedron",8},{"Dodecahedron",12},{"Icosahedron",20}};
	vector<string> v;
	string s;

	for(int i=0;i<n;i++)
	{
		cin>>s;
		v.push_back(s);
	}

	int c=0;

	for(auto x:v)
	{
		c+=m.find(x)->second;
	}
	cout<<c<<"\n";
		
		
	
return 0;
}