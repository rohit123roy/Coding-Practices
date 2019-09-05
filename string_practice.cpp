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
	
	string str;
	string str2="Writing ";
	string str3="print 10 and then 5";
	
	str.append(str2);									//append()
	str.append(str3,6,3);								//append()
	str.append("dots are cool",5);						//append()
	str.append("here: ");								//append()
	str.append(10u,'.');								//append()
	str.append(str3.begin()+8,str3.end());				//append()
	//str.append<int>(5,0x2E);							//append()
	
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
	
	str.assign(10,0x2D);							//assign()
	cout<<str<<"\n";
	
	cout<<str.at(2)<<"\n";							//at()
	
	str.clear();
	
	str="hello world.";
	str.back()='!';								//back()
	cout<<str<<"\n";
	
	str="test string";
	for(auto x:str)
		cout<<x;
	cout<<"\n";
	reverse(str.begin(),str.end());
	cout<<str<<"\n";
	cout<<str.size()<<"\n";
	
	string str1="green apple";
	str2="red apple";
	
	if(str2.compare(str1) !=0)						  //compare()
		cout<<str1<<" is not equal to "<<str2<<"\n";
	
	if(str1.compare(6,5,"apple")==0)				//compare()
		cout<<"still "<<str1<<" is an apple"<<"\n";
		
	if(str2.compare(str2.size()-5,5,"apple")==0)	//compare()
		cout<<"and "<<str2<<" is also an apple\n";
	
	if(str1.compare(6,5,str2,4,5)==0)				//compare()
		cout<<"therefore, both are apples\n";
		
	str1.swap(str2);
	cout<<str1<<"\n"<<str2<<"\n";						//swap()
	
	vector<int> foo(5,10);
	vector<int> bar(5,33);
	
	swap_ranges(foo.begin()+1,foo.end()-1,bar.begin());	//swap_ranges()
	
	for(auto x:foo)
		cout<<x<<" ";
	cout<<"\n";
	for(auto x:bar)
		cout<<x<<" ";
	cout<<"\n";
	
	string content;
	string line;
	/*geting more than one lines in a string*/
	do{
		getline(cin,line);
		content+= line+'\n';
	}while(!line.empty());							  //empty()
	cout<<"The text you introduced was :\n"<<content;
	cout<<"\n";

	string str5;
	getline(cin,str5);
	cout<<str5<<"\n";
	
	str	="There are two needles in this haystack with needles.";
	str2="needle";
	
	size_t found=str.find(str2);						//found()
	if(found != string::npos)
		cout<<"first 'needle' found at: "<<found<<"\n";
		
	found=str.find("needles",found+1,6);				//find()
	if(found!= string::npos)
		cout<<"second needle found at: "<<found<<"\n";
		
	found=str.find("haystack");							//find()
	if(found!=string::npos)
		cout<<"haystack also found at: "<<found<<"\n";
		
	found=str.find('.');								//find()
	if(found!=string::npos)
		cout<<"Period found at: "<<found<<"\n";
	
	str.replace(str.find(str2),str2.length(),"preposition");	//replace()
	cout<<str<<"\n";	
	
	str="look for first non-alphabetic character in string...";	//find_first_not_of()
	found=str.find_first_not_of("abcdefghijklmnopqrst ");
	
	if(found!=string::npos)
	{
		cout<<"Character is: "<<str[found]<<" at position: "<<found<<"\n";
	}
	
	str="Please replace the vowels in sentence by astericks.";
	found=str.find_first_of("aeiou");						//find_first_of()
	while(found!=string::npos)
	{
		str[found]='*';
		found=str.find_first_of("aeiou",found+1);
	}
	cout<<str<<"\n";
	
	str="Please erase white trailing spaces";
	str1=" \t\f\v\n\r";
	
	found=str.find_last_not_of(str1);
	if(found!=string::npos)
		str.erase(found+1);
	else
		str.clear();
	cout<<'['<<str<<']'<<"\n"<<found<<"\n";
	
	
	
	
	return 0;
}

