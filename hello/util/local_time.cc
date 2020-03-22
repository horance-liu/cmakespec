#include "local_time.h"
#include <ctime> 

std::string local_time() {
  auto now = std::time(nullptr); 
  return std::asctime(std::localtime(&now)); 
}