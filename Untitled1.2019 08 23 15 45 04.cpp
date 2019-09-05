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
	
	string s;
	getline(cin,s);						//getline()
	cout<<s<<"\n";
	
	s.push_back('R');					//push_back()
	
	cout<<s<<"\n";
	
	s.pop_back();						//pop_back()
	cout<<s<<"\n";
	
	string str="GeekeforGeeks is a computer science portal";
	cout<<str.capacity()<<"\n";			//capacity()
	
	str.resize(13);						//resize()
	cout<<str<<"\n";
	
	cout<<str.length()<<endl;			//length()
	
	str.shrink_to_fit();				//shrink_to_fit()
	cout<<str.capacity()<<endl;	
	
	// Iterator Functions
	str="code jam";
	
	std::string::iterator it;			//Declaring iterator
	
	std::string::reverse_iterator it1;  //Declaring reverse iterator
	
	cout<<"The string using forward iterator is: ";
	for(it=str.begin(); it!=str.end(); it++)
	{
		cout<<*it;
	}
	cout<<"\n";
	
	cout<<"The reverse string using reverse iterator is: ";
	for(it1=str.rbegin(); it1!=str.rend(); it1++)
	{
		cout<< *it1;
	}
	cout<<"\n";
	
	//Manipulating Functions
	
	string str1="rohit for codejam";
	string str2="geeksforgeeks rocks";
	
	char ch[20];
	
	str2.copy(ch,15,0);					//copy()
	cout<<ch<<"\n";
	
	str1.swap(str2);
	cout<<str1<<"\n"<<str2<<"\n";
	
	return 0;
}

