#include <string>
#include <thread>
#include <iostream>
using namespace std;
void FireTorpedo(int numCities, string torpedoType)
{
  cout << "Firing torpedo " << torpedoType << " at" << numCities << " cities." << endl;
}
int main()
{
  thread t1(FireTorpedo, 3, "HungryShark");
  t1.join();
  return 0;
}