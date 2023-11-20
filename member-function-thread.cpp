#include <thread>
#include <iostream>
using namespace std;
class Torpedo
{
public:
  void LaunchTorpedo()
  {
    cout << " Launching Torpedo" << endl;
  }
};
int main()
{
  //Execute the LaunchTorpedo() method for a specific Torpedo object on a seperate thread
  Torpedo torpedo;
  thread t1(&Torpedo::LaunchTorpedo, &torpedo);
  t1.join();
  return 0;
}