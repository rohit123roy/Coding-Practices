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
	
	set<int> s1{1,2,3,4,5};
	
	for(auto it=s1.begin();it!=s1.end();it++)	//begin() ; end()
		cout<<*it<<" ";
		
	cout<<"\n";
	
	set<char> s2{'a','c','g','z'};
	for(auto it=s2.begin();it!=s2.end();it++)
		cout<<*it<<" ";
		
	cout<<"\n";
	
	set<string> s3{"This","is","GeeksforGeeks"};
	for(auto it=s3.begin();it!=s3.end();it++)
		cout<<*it<<" ";
	set<int> s4{4,2,8,1,9,9,4};
	s4.insert(5);
//	s4.clear();
	for(auto it=s4.begin();it!=s4.end();it++)
		cout<<*it<<" ";
		
	cout<<"\n";

	return 0;
}

