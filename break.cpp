#include<iostream>
using namespace std;
int main()
{for (int n(10);n>0;n--)
{cout<<n<<",";
if (n==3)//if u use = instead of == it will become a logical error as = is an assignment operator
{cout<<"oops";break;}}}
