#include<iostream>
using namespace std;

class room
{
int width;
int height;
static int copyconscount;
public:
room()
{
width=12;
height=8;
}
room(room& r)
{
width=r.width;
height=r.height;
copyconscount++;
}
void dispcopyconscount()
{
cout<<copyconscount;
}
};

int room::copyconscount=0;

int main()
{
room objroom1;
room objroom2(objroom1);
room objroom3=objroom1;
room objroom4;
objroom4=objroom3;
objroom4.dispcopyconscount();
}


