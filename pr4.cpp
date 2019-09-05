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
	
	string s="rohit\\n";
	int i=0;
	do
	{
		if(s[i])
			cout<<"Yes ";
		else
			cout<<"No ";
	}while(s[i++]);
	return 0;
}

