#include<iostream>
using namespace std;
class ABAC;	
class A
{
int i;
};
class AB:virtual A
{
int j;
};
class AC:A,ABAC
{
int k;
};
class ABAC:AB,AC
{
int l;
};
int main()
{
ABAC abac;
cout<<"sizeof ABAC:"<<sizeof(abac);
}

