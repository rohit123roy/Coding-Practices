/**
  Author : rohitroy
**/
#include "bits/stdc++.h"
using namespace std;

#define ll long long

struct{
	char name[20];
	int age;
}person, person_copy;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char myname[]="Rohit Roy";
	memcpy(person.name, myname, strlen(myname)+1);	 // memcpy() to copy string
	
	cout<<person.name<<endl;
	
	memcpy(&person_copy, &person, sizeof(person));
	
	cout<<person_copy.age<<"\n";					// memcpy() to copy structure
	
	
	char str1[]="rohit roy ";				//memmove()
	memmove(str1+10, str1+6, 3);
	
	cout<< str1<<endl;
	
	char str2[]="Sample string";
	char str3[10];
	strcpy(str3, str2);						//strcpy()
	
	cout<<str3<<"\n";
	
	char str4[]="To be or not to be";
	char str5[20];
	strncpy(str5, str4, sizeof(str5));		//strncpy()
	str5[5]='\0';
	
	cout<<str5<<"\n";
	
	char str6[30];
	strcpy(str6,"I ");
	strcat(str6,"love ");					// strcat()
	strcat(str6,"coding ");
	strcat(str6,"in C++.");
	
	cout<<str6<<"\n";
	
	strncat(str6,str6,7);					// strncat()
	
	cout<<str6<<"\n";
	
	char str7[]="malayalam";
	char str8[]="malayalam";
	int n=memcmp(str7,str8,sizeof(str7));	//memcmp()
	
	cout<<n<<"\n";
	
	int m=strcmp(str7,str8);				//strcmp()
	
	cout<<m<<"\n";
	
	char str11[][5]={"R2D2","C3PO","R2A6"};
	for(int i=0;i<3;i++)
	{
		if(strncmp(str11[i],"R2xx",2)==0)	//strncmp()
			cout<<str11[i]<<"\t";
	}
	cout<<"\n";
	
	char *a;
	char b[]="Malayalam";
	
	a=(char *)memchr(b,'l',strlen(b));		//memchr()
	
	cout<<"'l' is found at position: "<<a-b+1<<"\n";
	while(a)
	{
		cout<<a-b+1<<"\n";
		a=strchr(a+1,'l');
		
	}
	
	cout<<strrev((char*)"Rohit")<<"\n";
	return 0;
}

