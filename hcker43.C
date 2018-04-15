/*solved*/
#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>

using namespace std;
//www.cleartrip.com/signin/service?username=test&pwd=test&profile=developer&role=ELITE&key=manager

int main()
{
char url[100];
char *p;
cin.getline(url,100);
p=strtok(url,"=");
cout<<"Username: ";
cout<<(strtok(NULL,"&"))<<endl;
cout<<strtok(NULL,"=")<<": " ;
cout<<(strtok(NULL,"&"))<<endl;
cout<<(strtok(NULL,"="))<<": ";
cout<<strtok(NULL,"&")<<endl;
cout<<strtok(NULL,"=")<<": ";
cout<<strtok(NULL,"&")<<endl;
cout<<strtok(NULL,"=")<<": " ;
cout<<strtok(NULL,"&")<<endl;
//cout<<"manager"<<endl;
return 0;
}
