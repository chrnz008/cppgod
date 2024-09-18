#include<iostream>
using namespace std;
int divide (int a,int b=2)//we initialized b
{int r;
r=a/b;
return (r);}
int main()
{cout << divide(12)<<'\n';//note how we didnt use argument of second variable as if defaultly uses b
cout << divide(30,6)<<'\n';}