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
	
	int a;
	cin>>a;
	printf((a%4==0 || a%7==0 ||a%47==0 ||a%74==0 || a%477==0)?"YES\n":"NO\n");	
	
	return 0;
}