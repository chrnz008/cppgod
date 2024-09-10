#include<iostream>
#include<string>
using namespace std;
int main()
{string st;
do
{
    cout<<"enter your text :";
    getline(cin,st);
    cout<<"you have entered "<<st<<" :]"<<endl;
} while (st !="goodbye");}
