#include <iostream>
#include <say-hello/hello.hpp>

int main()
{
  Hello h1;
  h1.say_hello();
  std::cout << "Hello, world from version " << SAY_HELLO_VERSION << std::endl;
}

