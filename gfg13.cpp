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
	
	int t=0;
	cin>>t;

	while(t--)
	{
		string s;
		vector<int> v;
		cin>>s;
		size_t found=s.find_first_of("aeiou");
		while(found != string::npos)
		{
			v.push_back(found);
			found=s.find_first_of("aeiou",found+1);
		}
		int n=v.size()-1;
		for(int j=0;j<=n/2;j++)
			swap(s[v[j]],s[v[n-j]]);	

		cout<<s<<"\n";
	}	
	
return 0;
}