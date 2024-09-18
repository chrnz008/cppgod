#include<iostream>
using namespace std;
template<class hehe>//u can use "class or typename" as keywords
hehe sum(hehe a,hehe b)
{hehe resultoo;
resultoo=a+b;
return resultoo;}
int main()
{int i(5),j(8),k;double f(0.66),g(8),h;//though compiler can deduce the data type automatically
k=sum<int>(i,j);//so k=sum(i,j);h=sum(g,f); works fine too!!
h=sum<double>(g,f);
cout<<k<<'\n'<<h<<'\n';}