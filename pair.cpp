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
	
	pair<int,int> p1;
	
	p1.first=100;
	p1.second='G';
	
	cout<<p1.first<<" ";
	cout<<p1.second<<"\n";
	
	pair<int,int> g1;
	pair<int,char> g2(1,'a');
	pair<int,int> g3(1,10);
	pair<int,int> g4(g3);
	
	g2=make_pair(4,'w');
	
	cout<<g1.first<<"\n";
	cout<<g1.second<<"\n";
	
	p1=make_pair(1,12);
	pair<int,int>p2 =make_pair(9,12);
	
	cout<<(p1==p2)<<"\n";
	cout<<(p1 != p2)<<"\n";
	cout<<(p1>=p2)<<"\n";
	cout<<(p1<=p2)<<"\n";
	cout<<(p1>p2)<<"\n";
	cout<<(p1<p2)<<"\n";
	
	pair<int,char> pp1(3,'A');
	pair<int,char> pp2(6,'R');
	
	pp1.swap(pp2);
	
	cout<<pp1.first<<" "<<pp1.second<<"\n";
	cout<<pp2.first<<" "<<pp2.second<<"\n";
	return 0;
}

