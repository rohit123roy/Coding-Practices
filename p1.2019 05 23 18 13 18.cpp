/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

void func(vector<int> &vect)
{
	vect.push_back(30);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	
	func(vect);
	
	for(int i=0;i<(int)vect.size();i++)
	{
		cout<<vect[i]<<" ";
	}
	
	return 0;
}

