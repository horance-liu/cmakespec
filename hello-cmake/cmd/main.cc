#include "hello_greet.h" 
#include "string_view.h" 

#include <iostream>

int main(int argc, char** argv) { 
  std::string str = hello_greet("CMake") + "  ";
  std::cout << StringView(str).rtrim() << std::endl;
  return 0; 
}