/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a stack using c++11 std from scratch
 * Date: October 27, 2014
 */

#include <iostream>
#include "unit.h"
#include "stack.h"

void runTests() {
  myStack mystack (0,1);
  mystack.push(1);
  mystack.push(2);
  mystack.push(3);
  mystack.displayStack();
  return;
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
      runTests();
    } else {
      std::cout << "TO IMPLEMENT LATER" << std::endl;
    }
    return 0;
}
