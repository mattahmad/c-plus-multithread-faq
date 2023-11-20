#include <thread>
#include <iostream>
using namespace std;
//Create the function object
class Missile
{
public:
  void operator() () const
  {
    cout << "Firing Tomahawk missile" << endl;
  }
};
int main()
{
  //Creating a thread with an function object
  Missile tomahawk;
  thread t1(tomahawk);
  t1.join();
  return 0;
}