#include<iostream>
using namespace std;
class room
{
float mwidth;
float mlength;
public:
 room()
 {}
 room(float w, float h):mwidth(w),mlength(h)
 {
 }
operator float()
{
return (float)mwidth*mlength;
}
float getwidth()
{
}
float getlength()
{
return mlength;
}
};
int main()
{
room objroom1(2.5,2.5);
float ftotalarea;
ftotalarea=objroom1;
cout<<ftotalarea;
}
