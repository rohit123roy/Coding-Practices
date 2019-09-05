/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

int foo(int p)
{
	return (1<<(p-1)) * ((1<<p) - 1);
}

bool isperfect(int num)
{
	int p[10]={2,3,5,7,13,17};
	for(int i : p)
	{
		if(foo(i)==num)
			return 1;
	}
	return 0;	
}



int main()
{
	ios::sync_with_stdio(0 );
	cin.tie(0);	
	int num;
	cin>>num;
	cout<<isperfect(num)<<"\n";
	
	return 0;
}