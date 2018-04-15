#include <iostream>
#include<string>
#include<string.h>
using namespace std;
 string reverse(string ,long int );
int main()
{
   int t;
   long int l;
  
   cin>>t;
   string c1,c2,c3,c4,c5,c6;
   for(int i=0;i<t;i++)
   { 
   	cin>>c1>>c2;
        c3=c1;
        c4=c2;
   	c1.append(c2);
   	c2.append(c3);
cout<<c1<<endl;
cout<<c2<<endl;
   	l=c1.length();
        c5=reverse(c1,l);
cout<<"We are in main"<<endl;
cout<<c5<<endl;
        c6=reverse(c2,l);
cout<<"We are in main"<<endl;
cout<<c6;
   	if(((c5.compare(c1))==0)||((c6.compare(c2))==0))
   	cout<<"YES"<<endl;
   	else
   	cout<<"NO"<<endl;
   	
   }
}

string reverse(string s1,long int l1)
{
cout<<"Welcome"<<endl<<s1<<endl;
string s2;
long int l2=0;
for(long int j=l1-1;j>=0;j--)/*this thing not working*/
{
s2[l2]=s1[j];
l2++; 
}                       /* till here           */  
s2[l2+1]='\0';
cout<<"we are in reverse"<<endl;
cout<<s2<<endl;
return s2;
}

