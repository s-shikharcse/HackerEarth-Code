#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t,la,lb,count;
	char ca,cb;
	string s[2];
	cin>>t;
	for(int i=0;i<t;i++)
	{   count=0;

              for(int x=0;x<2;x++)
               {
                  getline(cin,s[x]);
               }
              la=s[0].length();
              lb=s[1].length();
		if(la>lb)
		{
			for(int j=0;j<la;j++)
			{
				ca=s[0].at(j);
				for(int k=0;k<lb;k++)
				{
					cb=s[1].at(k);
					if(ca==cb)
					{
						s[1][k]='*';
						count++;
						break;
					}
					
				}
							
			}
                   if(count==lb)
				{
					cout<<"You win some."<<endl;
				}

			
		}
		else if(lb>la)
		{
			for(int j=0;j<lb;j++)
			{
				cb=s[1].at(j);
				for(int k=0;k<la;k++)
				{
					ca=s[0].at(k);
					if(ca==cb)
					{
						s[0][k]='*';
						count++;
						break;
						
					}
					
				}
			}
                    if(count==la)
				{
					cout<<"You lose some."<<endl;
				}

			
			
		}
	}
}
	
	
