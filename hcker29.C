#include<iostream>
#include<string>
using namespace std;

int main()
{
int t,l,count,count1;
char x,c,w,w1;

cin>>t;
string s[t];
 for(int i=0;i<t;i++)
  {w='a';
   cin>>s[i];
   l=s[i].length();
   int count_array [l];
   for(int j=0;j<l;j++)
    {
    count=0;
    c=s[i].at(j);

   for(x=w;x<='z';x++)
       {
        if(x==c)
         { w=x; 
           if(count<=(26-count))
            count_array [j]=count; 
	   else 	
	    count_array [j]=-(26-count);
          break;
         }
        else
         {
         count++;
         w=x;  
         }     
 
       }

   if((x=='z')&&(s[i].at(j-1))>c)
     { int count1=0;
       w1=s[i].at(j-1);
      for(char y=w1;y>=c;y--)
         {
           if(c==y)
           {  w=y;
              
              if(count1<count)
              count_array[j]=-count1;
	      else if(count1==count)
              count_array[j]=count1;
              else
              count_array[j]=count+count1;
              
              break;
           }
           else
            {
             count1++;
            }
         }
      }



    }
    for(int k=0;k<l;k++)
     {
       cout<<count_array[k]<<" ";
     }
  }

}
