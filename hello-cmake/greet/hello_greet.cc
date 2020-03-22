#include "hello_greet.h"
#include "local_time.h"
#include <iostream>

std::string hello_greet(const std::string& who) {
  std::cout << local_time();
  return std::string("Hello ") + who;
}