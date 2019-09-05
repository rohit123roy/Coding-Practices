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
	/*Important string initializations.*/
	string p0;
	string p1("Hello");
	string p2(p1);
	string p3(p1,1,2);
	string p4("Hello world",5);
	string p5(5,'\n');
	string p6(p1.begin(),p1.begin()+3);
	cout<<p0<<"\n"<<p1<<"\n"<<p2<<"\n"<<p3<<"\n"<<p4<<p5<<"\n"<<p6<<"\n";
	
	string str;
	string str2="Writing ";
	string str3="print 10 and then 5";
	
	str.append(str2);									//append()
	str.append(str3,6,3);								//append()
	str.append("dots are cool",5);						//append()
	str.append("here: ");								//append()
	str.append(10u,'.');								//append()
	str.append(str3.begin()+8,str3.end());				//append()
	//str.append<int> (5,0x2E);							//append()
	
	cout<<str<<"\n";
	
	string base="The quick brown fox jumps over a lazy dog.";
	
	str.assign(base);								//assign()
	cout<<str<<"\n";	
	
	str.assign(base,10,9);							//assign()
	cout<<str<<"\n";
	
	str.assign("pangrams are cool",7);				//assign()
	cout<<str<<"\n";
	
	str.assign("c-string");							//assign()
	cout<<str<<"\n";
	
	str.assign(10,'*');								//assign()
	cout<<str<<"\n";
	
	str.assign(10,0x2E);							//assign()
	cout<<str<<"\n";
	
	cout<<str.at(2)<<"\n";							//at()
	
	str.clear();
	
	str="hello world.";
	str.back()='!';								//back()
	cout<<str<<"\n";
	

	return 0;
}

