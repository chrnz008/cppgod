/*But there is another substantial difference between variables with static storage and variables with 
automatic storage:- Variables with static storage (such as global variables) that are not explicitly
 initialized are automatically initialized to zeroes.- Variables with automatic storage (such as local
  variables) that are not explicitly initialized are left uninitialized, and thus have an undetermined value.*/
  #include <iostream>
using namespace std;

int x;

int main ()
{
  int y;
  cout << x << '\n';
  cout << y << '\n';
  return 0;
}
