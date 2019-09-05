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
/************************* Iterators****************************************/
/*SET*/
	int myints[]={75,75,23,65,42,13};
	set<int>myset(myints, myints+5);
	for(auto it=myset.begin();it!=myset.end();++it)	// begin(); end()
		cout<<*it<<" ";
	cout<<"\n";
		
	for(auto it=myset.rbegin(); it!=myset.rend();it++) // rbegin(); rend()
		cout<<*it<<" ";
	cout<<"\n";
	
/*MULTISET*/
	
	multiset<int> mset(myints,myints+5);
	
	multiset<int>::iterator it;
	for(it=mset.begin();it!=mset.end();it++)	// begin(); end()
		cout<<*it<<" ";
	
	cout<<"\n";
	multiset<int>:: reverse_iterator rit;
	for(rit=mset.rbegin();rit!=mset.rend();rit++)	// rbegin() , rend()
		cout<<*rit<<" ";
		
	cout<<"\n";
	
/*MAP*/
	
	map<char,int> mymap;
	mymap['b']=100;
	mymap['a']=200;
	mymap['c']=300;
	
	for(map<char,int>:: iterator it=mymap.begin(); it!=mymap.end();it++) //begin(), end()
		cout<<it->first<<" => "<<it->second<<"\n";
				
	//map<char,int>:: reverse_iterator rit;
	for(auto rit=mymap.rbegin(); rit!=mymap.rend();++rit)		//rbegin() , rend()
		cout<<rit->first<<" => "<<rit->second<<"\n";
		
/*multimap*/

	multimap<char,int> m1;
	
	m1.insert(pair<char,int> ('a',10));
	m1.insert(pair<char,int> ('b',20));
	m1.insert(pair<char,int> ('b',30));
	
	for(multimap<char,int>::iterator it=m1.begin();it!=m1.end();++it) //begin(), end()
		cout<<(*it).first<< " => "<<(*it).second<<"\n";
		
	for(multimap<char,int>::reverse_iterator it=m1.rbegin();it!=m1.rend();++it) //rbegin(), rend()
		cout<<it->first<<" => "<<it->second<<"\n";
		
/*unordered_set*/

	unordered_set<string> ms1 = {"Mercury","Venus","mars","jupiter","earth","uranus","saturn","neptune"};
			
	for(auto it=ms1.begin();it!=ms1.end();it++)
		cout<<*it<<" ";
	for(unsigned i=0;i<ms1.bucket_count();i++)
	{
		cout<<"bucket "<<i<<"contains :";
		for(auto it=ms1.begin(i);it!=ms1.end(i);it++)
			cout<<*it<<" ";
		cout<<"\n";
	}
	cout<<"\n";			
		
	
	return 0;
}

