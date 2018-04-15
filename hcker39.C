//Little Kuldeep & contests program on Hackerearth
//Awesome program solved by me :))
#include <iostream>
#include<string.h>
#include<string>
using namespace std;

int main()
{
   int t,count,count1;
   string c;
   count=count1=0;
   cin>>t;
   string s[t];
   for(int i=0;i<t;i++)
   {
   	cin>>s[i];
   }
   for(int j=0;j<t;j++)
   {      
   	  c=s[j].substr(6,2);
          
   	for(int k=j+1;k<t;k++)
   	{
   		if(c.compare(s[k].substr(0,2))==0)
   		{
   			if((s[k].substr(3,2)).compare((s[j].substr(9,2)))<0 )
   			            {
                         cout<<"Will need a moderator!"<<endl;
                         count++;
                         count1++;
                         break;
                        }
   			else
   			continue;
                }
   	     
   	     else if(c.compare(s[k].substr(0,2))>0)
            {    
                if(c.compare(s[k].substr(6,2))<0)
              {
         	cout<<"Will need a moderator!"<<endl;
         	count++;
         	break;
              }
            }
         
     	}
   if(count1!=0)/*for not printing, if the no. of events are more than 2 and all are in which require "will need a moderator"*/ 
   break;
    
    }

  if(count==0)
  cout<<"Who needs a moderator?"<<endl;
}

