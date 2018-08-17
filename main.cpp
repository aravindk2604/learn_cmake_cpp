
#include <bits/stdc++.h>

int main() 
{
  // intention was to use C++14 and learn CMake
  // Hence using a lambda function here

  [out = std::ref(std::cout << "Hello ")](){out.get() << "World\n";}();

}
