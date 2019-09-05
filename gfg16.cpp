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
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		set<char> s1(s.begin(),s.end());
		vector<char> v(s1.begin(),s1.end());
		
		if((*v.begin()=='0' || *v.begin()=='1') && (*(v.end()-1)=='1' || *(v.end()-1)=='0'))
			cout<<true<<"\n";
		else
			cout<<false<<"\n";
	}

return 0;
}