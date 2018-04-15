#include<iostream>
#include<string>
#define YES 1
#define NO 0

using namespace std;

class rgstn
{
int rollno,year,tenth_pass,twelth_pass,btech_entry;
string name,branch,dob;
float cgpa;

public:
	void getdata();	
	void signup();
	void eligible_student();
	void check_eligibility();
        void scholars();
        void non_eligible();
};


void rgstn :: getdata()
{
        cout<<"Enter the Roll Number : ";
	cin>>rollno;
	cout<<"Enter the name of Student : ";
	cin>>name;
	cout<<"Enter the Year of study : ";
	cin>>year;
	cout<<"Enter the branch of B.tech : ";
	cin>>branch;
	cout<<"Enter the Date of Birth : ";
	cin>>dob;
	cout<<"Enter the CGPA : ";
	cin>>cgpa;
	cout<<"Enter the passing year of 10th : ";
	cin>>tenth_pass;
	cout<<"Enter the passing year of 12th : ";
	cin>>twelth_pass;
	cout<<"Enter the year of enrolllment for B.tech : ";
	cin>>btech_entry;
}


void rgstn :: signup()
{
	cout<<"Enter the name of student for registration : ";
	cin>>name;
	cout<<"Enter the roll number of student to be registered : ";
	cin>>rollno;
}



void rgstn :: check_eligibility()
{
	if((year==4)&&(cgpa>=6.5)&&((btech_entry-twelth_pass)<=2))		
	{
	eligible_student();
	}
	else
	{
	cout<<"NOT ELIGIBLE TO SIT IN THE RECRUITMENT PROCESS";
        non_eligible();
        }
       
}




void rgstn :: eligible_student()
{
cout<<rollno<<endl;
cout<<name<<endl;
cout<<dob<<endl;
}

void rgstn :: non_eligible()
{
cout<<"Name of student not eligible : "<<name<<endl;
cout<<"Roll no of not elligible student : "<<rollno<<endl;
if(year<4)
cout<<"REASON : "<<year;
else if(cgpa<6.5)
cout<<"REASON : "<<cgpa;
else 
cout<<"REASON : study gap is more than tolerable";
}


void rgstn :: scholars()
{
	if(cgpa>8)
	{
	cout<<"Name of student with cgpa>8 is : ";
	cout<<name<<rollno;
	}
}

int main()
{
char c[10],c1[10];
rgstn stdnt[5];
	for(int i=0;i<5;i++)	
	{
	stdnt[i].signup();
	cout<<"DO you want to register : ";
	cin>>c;
        if(c)
	stdnt[i].getdata();
	break;
        }
 
for(int j=0;j<5;j++)
{
stdnt[j].check_eligibility();
break;
}

	cout<<"DO YOU WANT TO FIND OUT STUDENT WITH CGPA > 8";		
	cin>>c1;
	if(c1)
	{
	for(int k=0;k<5;k++)
	{
	stdnt[k].scholars();
	break;
	}
	}
}

