#include <thread>
#include <iostream>
using namespace std;
int main()
{
  thread t1([] {
    cout << "Launching Scud missile" << endl;
  });
  t1.join();
  return 0;
}