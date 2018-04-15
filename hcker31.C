/*Sherlock and date program on Hackerearth*/
/*solved*/
/*redo with good approach*/
#include<iostream>
#include<string>
using namespace std;
enum month
{
January=1, February, March, April, May, June, July, August, September, October, November, December
};

int main()
{
string s;
int t,d,y,m;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>d>>s>>y;
if(s.compare("January")==0)
m=1;
else if(s.compare("February")==0)
m=2;
else if(s.compare("March")==0)
m=3;
else if(s.compare("April")==0)
m=4;
else if(s.compare("May")==0)
m=5;
else if(s.compare("June")==0)
m=6;
else if(s.compare("July")==0)
m=7;
else if(s.compare("August")==0)
m=8;
else if(s.compare("September")==0)
m=9;
else if(s.compare("October")==0)
m=10;
else if(s.compare("November")==0)
m=11;
else
m=12;
switch(m)
 {
  case January:if(d==1)
            {
            y=y-1;
            cout<<"31 December "<<y<<"\n";
            }
             else
            cout<<(d-1)<<" January "<<y<<"\n";
          break;
  case February:if(d==1)	
	 {
	  cout<<"31 January "<<y<<"\n";	
         }
          else
          cout<<(d-1)<<" February "<<y<<"\n";
          break;
  case March:if(d==1)
         {
            if(y%400==0)
             cout<<"29 February "<<y<<"\n";
             else if(y%100==0)
              cout<<"28 February "<<y<<"\n";
             else if(y%4==0)
             cout<<"29 February "<<y<<"\n";
             else
              cout<<"28 February "<<y<<"\n";
        }
        else
         cout<<(d-1)<<" March "<<y<<"\n";
        break;
  case April:if(d==1)
         {
         cout<<"31 March "<<y<<"\n";
         }
         else
         cout<<(d-1)<<" April "<<y<<"\n";
         break;
  case May:if(d==1)
         {
          cout<<"30 April "<<y<<"\n";       
         }
         else
          {
          cout<<(d-1)<<" May "<<y<<"\n";
          }
          break;
  case June:if(d==1)
         {
          cout<<"31 May "<<y<<"\n";
         }
         else
         {
         cout<<(d-1)<<" June "<<y<<"\n";
         }
         break;
  case July:if(d==1)
         {
          cout<<"30 June "<<y<<"\n";
         }
         else
         {
          cout<<(d-1)<<" July "<<y<<"\n";				
	 }
         break;
  case August:if(d==1)
         {
          cout<<"31 July "<<y<<"\n";
           }
          else
          {
           cout<<(d-1)<<" August "<<y<<"\n";
 		}
           break;
  case September:if(d==1)
         {
         cout<<"31 August "<<y<<"\n";
         }
         else
          {
           cout<<(d-1)<<" September "<<y<<"\n"; 
           }
	break;
  case October:if(d==1)
          {
           cout<<"30 September "<<y<<"\n";
           }
           else
           {
            cout<<(d-1)<<" October "<<y<<"\n";
             }
            break;
  case November:if(d==1)
          {
           cout<<"31 October "<<y<<"\n";  
           }
           else
           cout<<(d-1)<<" November "<<y<<"\n";
           break;
  case December:if(d==1)
          {
           cout<<"30 November "<<y<<"\n";   
           }
           else
            {
            cout<<(d-1)<<" December "<<y<<"\n";
            }
          break;

    
}
}
}
