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
	
	vector<int> v3 (10);
	
	for(int i=0;i<v3.size();i++)
		v3.at(i)=i;					// at()
		
	for(int i=0;i<v3.size();i++)
		cout<<v3.at(i)<<" ";
		
	cout<<"\n";	
	
	vector<int> a;
	a.push_back(10);
	while(a.back()!=0)
		a.push_back(a.back()-1);			// back()
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;	
	
	for(vector<int>::iterator it=v3.begin(); it!=v3.end(); it++)  //begin()
		cout<<*it<<" ";
	
	cout<<endl;	
	
	vector<int> v;
	for(int i=0;i<1024;i++)
		v.push_back(i);
	
	cout<<v.size()<<"\n";
	cout<<v.capacity()<<"\n";						// capacity()
	cout<<v.max_size()<<"\n";						// max_size()			
	
	vector<int> v1={10,20,30,40,50};
	for(auto it=v1.cbegin(); it!=v1.cend();it++) 	//cbegin()
		cout<<*it<<" ";
	cout<<"\n";

	vector<int> v2={10,20,30,40};
	for(auto it=v2.cbegin();it!=v2.cend(); it++)	//cend()
		cout<<*it<<" ";
	cout<<"\n";
	
	v2.clear();
	cout<<v2.size()<<"\n";							//clear()
	
	for(auto i=v1.rbegin();i!=v1.rend();i++)		//rbegin()  &  rend()
		cout<<*i<<" ";
		
	vector<int> v4{1,2};
	if(v4.empty())									//back()
		cout<<"True";
	else
		cout<<"False";	
		
	cout<<"\n";
	
	vector<int> v5 {1,2,3,4};
	vector<int> v6{6,7,8};
	v5=v6;
	
	for(auto it=v5.begin(); it!=v5.end();it++)
		cout<<*it<<" ";
	cout<<"\n";
	
	vector<int> v8;
	v8.push_back(3);
	v8.push_back(2);
	v8.push_back(6);
	v8.push_back(9);
	v8.push_back(7);
	
	cout<<*v8.begin()<<"\n";
	cout<<v8.front()<<" "<<v8.back()<<"\n";		// front() ;  back()
	
	int *p=v8.data();
	for(int i=0;i<v8.size();i++)
		cout<<*p++<<" ";
	cout<<"\n";
	
	vector<int> vv;
	int aa[]={1,2,3,4};
	
	vv.assign(10,100);							//assign()
	
	for(auto it=vv.begin();it!=vv.end();++it)
		cout<<*it<<" ";
	cout<<"\n";	
	vv.clear();									//clear()
	vv.assign(aa,aa+(sizeof(aa)/4));			//assign()
	
		
	auto it=vv.insert(vv.begin()+1,100);		//insert()
	vv.insert(it,200);
	vv.insert(it,2,4);
	int i=0;
	while(i<vv.size())
		cout<<vv[i++]<<" ";
	cout<<endl;
	
	auto it1=vv.begin();
	vv.erase(it1+1);
	vv.erase(it1,it1+1);						//erase()
	i=0;
	while(i<vv.size())
		cout<<vv[i++]<<" ";
	cout<<endl;
	
	vector<int> vv1={1,5,2,7,9};
	vector<int> vv2={7,2,9,3};
	vv1.swap(vv2);							   //swap()
	vv1=vv2;
	i=0;
	while(i<vv2.size())
		cout<<vv2[i++]<<" ";
		
	cout<<endl;
	
	vv1.emplace(vv1.end(),10);				//emplace()
	
	vector<int> vv3={3,3,5,6,7,7,6,5,5,6};
	sort(vv3.begin(),vv3.end());
	i=0;
	while(i<vv3.size())
		cout<<vv3[i++]<<" ";
		
	cout<<endl;
	vector<int>::iterator lower,upper;
	lower=lower_bound(vv3.begin(),vv3.end(),5);		// lower_bound()
	upper=upper_bound(vv3.begin(),vv3.end(),5);		// upper_bound()
	
	cout<<"Lower bound for 6 : "<<lower-vv3.begin()<<"\n";
	cout<<"Upper bound for 6 : "<<upper-vv3.begin()<<"\n";
		
	cout<<endl;
	
	return 0;
}

