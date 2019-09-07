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
	
	string s;
	string s1;
	cin>>s;

	vector<int> v;

	string::size_type found=s.find("WUB");
	if(found!=string::npos)
	{	
		while(found!=string::npos)
		{
			v.push_back(found);
			found=s.find("WUB",found+3);
		}
		int i=0;
		for(i=0;i<v.size()-1;i++)
		{
			if(v[i+1]-v[i]==3)
				continue;
			s1.append(s.begin()+v[i]+3,s.begin()+v[i+1]);
			s1+=" ";
		}
		if(v[0]!=0)
		{

			s1.insert(s1.begin(),s.begin(),s.begin()+v[0]);
			s1.insert(v[0]," ");
		}

		s1.append(s.begin()+v[i]+3,s.end());
		cout<<s1<<"\n";
	}
	else
		cout<<s<<"\n";
return 0;
}