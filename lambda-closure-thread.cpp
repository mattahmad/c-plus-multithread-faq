#include <thread>
#include <iostream>
using namespace std;
int main()
{
  // Define a lambda closure
  auto LaunchMissileFunc = []() -> void { cout << "Launching Cruiser Missile" << endl; };
  thread t1(LaunchMissileFunc);
  t1.join();
  return 0;
}