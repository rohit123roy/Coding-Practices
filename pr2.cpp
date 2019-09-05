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
	
	string str="geeksforgeeks";
	reverse(str.begin(),str.end());
	
	cout<<str<<endl;
	
	int *p=NULL;
	p=new int;
	cin>>*p;
	cout<<*p<<"\n";
	
	int *a=new int;
	int *b=new int(25);
	cout<<*b<<endl;
	
	float *q=new float(34.5);
	cout<<*q<<endl;
	
	int *x= new int[10];
	delete x;
	delete[] x;
	return 0;
}

