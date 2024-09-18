#include<iostream>
using namespace std;
long factorial(long a){
if(a>1)
return (a*factorial(a-1));
else return 1;}
int main()
{long num;
cout<<"enter number :";
cin>>num;
cout<<num<<"!="<<factorial(num);}
//if number is 0 0r negative it would create a stack overflow