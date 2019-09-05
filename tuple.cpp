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
	
	tuple <char,int, float> geek;
	
	geek=make_tuple('a',10,15.5);							// make_tuple()
	
	cout<<get<0> (geek)<<" "<<get<1>(geek)<<" "<<get<2>(geek)<<"\n";
	
	get<0>(geek)='d';										// get<>()			
	get<2>(geek)=16.4;
	
	cout<<get<0>(geek)<<" "<<get<1>(geek)<<" "<<get<2>(geek)<<"\n";
	
	geek=make_tuple(20,'g',17.5);
	cout<<tuple_size<decltype(geek)>::value<<endl;				//tuple_size()
	
	tuple<int,char,float> t1(4,'s',4.5);
	tuple<int,char,float> t2(10,'f',6.7);
	
	cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<"\n";
	cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<"\n";
	
	t1.swap(t2);												//swap()
	
	cout<<get<0>(t1)<<" "<<get<1>(t1)<<" "<<get<2>(t1)<<"\n";
	cout<<get<0>(t2)<<" "<<get<1>(t2)<<" "<<get<2>(t2)<<"\n";
	
	int x;
	char c;
	float f;
	
	tuple<int,char,float> tup1(3,'d',6.9);				
	tie(x,c,f)=tup1;										// tie()
	
	cout<<x<<" "<<c<<" "<<f<<"\n";
	tie(x,ignore,f)=tup1;									// tie()
	
	cout<<x<<" "<<f<<"\n";
	
	tup1=make_tuple(30,'g',89.3);
	tuple<int,char,float> tup2(31,'e',34.1);
	
	auto tup3=tuple_cat(tup1,tup2);						// tuple_cat()
	
	
	
	return 0;
}

