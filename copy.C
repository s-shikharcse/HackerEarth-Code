/*
Tutorials
Forum
 shikhar31
Editorial for "Counting Strings"14 October 2013
0
| | viewed: times Submitted by: Sachin Gupta | edit | history
This is a tutorial for the problem Counting Strings in HackerEarth's monthly contest for September - September Rush

Problem statement: You need to find the number of substrings of the input string that contain the letter a or z.

This can be solved in many ways. One way is find all the strings that do not contain both letters a and z. To find the number of substrings that do not contain the letter a and z, you iterate through the input string until you encounter either a or z. If you encounter either of the letters a or z, stop iterating and count the substrings of string we have till now. Then again start from the next letter and do this till you scan the whole string. Finally, subtract the result from total number of substrings. that is N*(N + 1)/2 where N is the length of the input string.

You can go and solve the problem here.
*/
#include <iostream>
using namespace std;

int main()
{int n;
cin>>n;
cin.ignore();
for(int i=0;i<n;i++)
{
string s;
getline(cin,s);
long long c=0,l=0;
for(int j=0;j<s.length();j++)
{
if(s[j]=='a'||s[j]=='z')
l=j+1;
c+=l;   
}
cout<<c<<"\n";
}
return 0;
}


/*
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t,l;
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
    	cin>>s;
    	l=s.length();
    	for(int j=0;j<l;j++)
    	{
    		int count=0;
    		if((s[j]=='a')||(s[j]=='z'))
    		{
    			count=((j-1)*j)/2;
    		}
    		if(count!=0)
    		{
    			
    		}
    		else
    		cout<<count;
    		
    	}
    	
    }
}

*/
