#include<iostream>
using namespace std;
class person
{
int age;
public:
person()
{
}
person(int age1)
{
this.age=age1;
}
person& operator < (person &p)
{
return age < p.age ? p: *this;
}
int getage()
{
return age;
}
};

int main()
{
person p1(15);
person p2(11);
person p3;
p3=p1 < p2;p1.lessthan(p2);/*no lessthasn function is present*/
cout<<p3.getage;

}
