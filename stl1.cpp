#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[])
{
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
}

int main()
{
	int a[10]={4,2,8,1,9,2,5,3,7,8};
	show(a);
	cout<<"\n";

	sort(a,a+10,greater<int>());
	show(a);
}