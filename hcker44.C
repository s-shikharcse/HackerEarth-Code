#include<iostream>
#include<string>
using namespace std;

int main()
{
int sum=0;
long int t;
typedef struct Date
{
int day;
int m;
int y;
}
Date d[t];
for(int i=0;i<t;i++)
{
cin>>d[i].day;
cin>>d[i].y;
for(int j=1900;j<d.y;j++)
{
if((j%400==0)||((j%4==0)&&(j%100!=0)))
sum+=2;
else
sum++; 
}

for(int j=1;j<d[i].m;j++)
{
if((j==1)||(j==3)||(j==5)||(j==7)||(j==8)||(j==10)||(j==12))
{
diff=diff+31;
}

}




}


}
