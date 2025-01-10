#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
int sec;
cout<<"Enter no of seconds:";
cin>>sec;
while(sec>0){
	cout<<"Remaining Time :"<<sec<<"\n";
	sleep(1);
	sec--;
}
  cout<<"TIMEUP!!!!\n";
return 0;}
