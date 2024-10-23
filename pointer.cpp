#include<iostream>
using namespace std;
int main()
{int first,second;
int*poo;
poo=&first;
*poo=25;
poo=&second;
*poo=10;
cout<<first<<'\n';
cout<<second<<'\n';}