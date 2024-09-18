#include<iostream>
using namespace std;
void odd(int x);
void even(int x);
int main()
{int i;
do
{cout<<"please enter number(0 to exit) :";
cin>>i;
odd(i);} while (i!=0);}

void odd(int x)
{if (x%2!=0)
cout<<"x is odd";
else even(x);}

void even(int x)
{if (x%2==0)
cout<<"x is even";
else odd(x);}
/*this is code is not about efficeincy it is an example jsut to explain declaration of functions
as we can write the programme to do same thing in half the lines of above*/