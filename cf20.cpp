/**
* author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long
int i;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);	
	
	
	char s[]="hello";

	char a;
	while(scanf("%c",&a) && a!='\n')
		if(a==s[i])
			i++;
	printf(i==5?"YES\n":"NO\n");
	return 0; 
}

