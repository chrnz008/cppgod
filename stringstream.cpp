#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string nina;
    double price;
    int quantity;
    cout<<"enter price :";
    getline(cin,nina);
    stringstream(nina)>>price;
    cout<<"enter quantity :";
    getline(cin,nina);
    stringstream(nina)>>quantity;
    cout<<"Total Price :"<<price*quantity;
}