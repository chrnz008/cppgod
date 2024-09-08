/* However, cin extraction always considers spaces (whitespaces, tabs, new-line...) as terminating the value
 being extracted, and thus extracting a string means to always extract a single word, not a phrase or an 
 entire sentence.To get an entire line from cin, there exists a function, called getline, that takes the 
 stream (cin) as first argument, and the string variable as second.*/
 // cin with strings
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string mystr;
  cout << "What's your name? ";
  getline (cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "What is your favorite team? ";
  getline (cin, mystr);
  cout << "I like " << mystr << " too!\n";
  return 0;
}