//main.cpp

#include <iostream>
#include "combinatronics.h"

int main(){
  std::cout << factorial(5) << std::endl;
  std::cout << permutation(8, 3) << std::endl;
  std::cout << combination(8, 3) << std::endl;

  return 0;
}
