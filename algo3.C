
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t,c1=0,c2=0;
cin>>t;
char str[150];
while(t--)
{
cin>>str;
for(int i=0;i<strlen(str);i++)
{
if(str[i]=='S'&&str[i+1]=='U'&&str[i+2]=='V'&&str[i+3]=='O'&&str[i+4]=='J'&&str[i+5]=='I'&&str[i+6]=='T')
{
c1++;
i=i+6;
}
else if(str[i]=='S'&&str[i+1]=='U'&&str[i+2]=='V'&&str[i+3]=='O')
{

c2++;
i=i+3;}

}
cout<<"SUVO = "<<c2<<", "<<"SUVOJIT = "<<c1<<endl;
c1=0;
c2=0;


}
return 0;
}
