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
	
	string s,s1;
	cin>>s;
	s1="aoyeui";

	transform(s.begin(),s.end(),s.begin(),::tolower);

	string::size_type found = s.find_first_of(s1);

	while(found!=string::npos)
	{
		s.erase(s.begin()+found);
		found=s.find_first_of(s1,found);
	}
	int i=0;
	while(s[i])
	{
		s.insert(s.begin()+i,'.');
		i+=2;
	}
	cout<<s<<"\n";
	
return 0;
}