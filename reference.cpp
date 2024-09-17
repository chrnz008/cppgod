#include<iostream>
using namespace std;
void dupli(int& a,int& b,int& c)//& indicates reference//reference is not just a copy but the actual variable
{a*=2;b*=2;c*=3;}
int main()
{int x=1,y=4,z=6;
dupli(x,y,z);
cout<<"x is "<<x<<" y is "<<y<<" z is "<<z<<"/n";}