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
	
	vector<int> v={1,2,3,4};
	
	vector<int>:: iterator i;
	
	int j;
	for(j=0;j<v.size();j++)
		cout<<v[j]<<" ";
		
	cout<<endl;
	
	for(i=v.begin();i!=v.end();i++)
	{
		cout<<*i<<" ";
	}
	cout<<endl;
	
	vector<int> v3{};
	if(v3.empty())
		cout<<"True";
	else
		cout<<"False";
		
	
	return 0;
}

