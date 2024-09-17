#include<iostream>
#include<string>
using namespace std;
string concatehehe(const string& a,const string& b)
{return a+b;}
int main(){
    string x = "hi";
    string y = " hello";
cout<<concatehehe(x,y);}
/*by qualifying const the function is forbidden to modify the values neither a nor b, but can actually
access their values as references*/
/*therfore const references have an increased efficiency for compound data types like strings and arrays
note though:: that for most of fundamental data types,there is no noticeable difference in efficiency
and in some cases,const references may even be less efficient!!*/  