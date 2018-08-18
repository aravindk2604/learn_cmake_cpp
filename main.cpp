// works perfectly with just the bits/stdc++.h header
// but otherwise the other two headers are used
//#include <bits/stdc++.h>

#include <iostream> // for cout
#include <functional> // for ref

int main()
{
  // intention was to use C++14 and learn CMake
  // Hence using a lambda function to print Hello world 

  [out = std::ref(std::cout << "Hello ")](){out.get() << "World\n";}();

}
