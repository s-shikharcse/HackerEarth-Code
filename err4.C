#include"iostream"
using namespace std;
class human
{
public:
human()
{
}
virtual ~human()
{
cout<<"human::~human ";
}

};

class student: public human
{
public:
student()
{
}
~student()
{
cout<<"student::~student()";
}

};

int main()
{

human *h=new student;
delete h;
}

