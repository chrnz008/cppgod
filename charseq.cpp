#include<iostream>
#include<string>
using namespace std;
int main()
{char question1[]="what is ur name?";
cout<<question1;string answer1;cin>>answer1;
char question2[]="where are u from?";
cout<<question2;string answer2;cin>>answer2;
cout<<"\nHi "<<answer1<<" from "<<answer2<<":)";
char myntcs[] = "some text";
string mystring = myntcs;  // convert c-string to string
cout<<'\n'<< mystring;          // printed as a library string
cout<<'\n'<<mystring.c_str();  // printed as a c-string 
}