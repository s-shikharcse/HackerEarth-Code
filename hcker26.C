/*no error in output of this program CAR NAMES on Hackerearth*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
int m,l,t,count,count1,count2;
char c;
cin>>t;
string s[t];
 for(int i=0;i<t;i++)
 {
 count=0;
 count1=1;
 count2=0;
 cin>>s[i];
 l=s[i].length();
 m=l/3;
  for(char x='a';x<='z';x++)
  {
   for(int j=0;j<l;j++)
    {
     c=s[i].at(j);
     if(c==x)
      {
       count++;
       break;	
      }
    }
  }

  if(count>3)
  cout<<"Not OK\n";
  else if(count==3)
  	{
	 for(int k=0;k<l;k=k+m)
 	  {
           c=s[i].at(k);
       
      
	      for(int n=k+1;n<k+m;n++)
              {
		if (c==s[i][n])
	            {
                     count1++;
                     continue;
                    }
              }
           
 	   }
        	 
	if (count1+2==l)
 		cout<<"OK\n";
 	else
    		cout<<"Not OK\n";

  	}
 
 else
  cout<<"Not OK\n";
 }

}
