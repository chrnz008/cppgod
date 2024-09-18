#include<iostream>
using namespace std;
int operate(int a,int b){return(a*b);}
double operate(double a,double b){return(a/b);}
int main()
{int x(6),y(8);double m(13.0),n(6.5);
cout<<operate(x,y)<<'\n';
cout<<operate(m,n)<<'\n';}
/*in c++,two different functions can have same name if their parameters are different'either 
because they have different number of parameters, or their parameters are of different type*/