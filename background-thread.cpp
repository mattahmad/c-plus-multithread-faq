#include <string>
#include <thread>
#include <iostream>
#include <functional>
using namespace std;
void Count()
{
  for (int i = 0; i < 100; i++)
  {
    cout << "counter at: " << i << endl;
  }
}
int main()
{
  thread t1(Count);
  std::this_thread::sleep_for(std::chrono::milliseconds(10));
  t1.detach();
  return 0;
}