#include<iostream>
#include<string>
using namespace std;
string concatehehe(string& a,string& b)
{return a+b;}
int main(){
    string x = "hi";
    string y = " hello";
cout<<concatehehe(x,y);}
//therefore using references is more efficient as it doesnt require to copy values
//in fundamental data types there is not much difference in efficiency by taking references