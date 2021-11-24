#include <iostream>
#include "foo/foo.h"
#include "cls.h"
using namespace std;

int main() {
  cout << "the foo value is " << foo(183) << endl;

  Cls cls;
  cout << "the hello value is " << cls.SayHello() << endl;

  return 0;
}