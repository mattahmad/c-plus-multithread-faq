#include <thread>
#include <iostream>
using namespace std;
void FireMissile()
{
  cout << "Firing sidewinder missile " << endl;
}
int main()
{
  //Creating a thread with a function pointer
  thread t1(FireMissile);
  t1.join();
  
  return 0;
}