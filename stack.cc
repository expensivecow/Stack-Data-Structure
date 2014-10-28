/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a stack using c++11 std from scratch
 * Date: October 27, 2014
 */

#include <iostream>
#include "unit.h"
#include <sstream>

#define SETSIZE 10

typedef int Index;

struct Stack{
  Index top;
  int arr[SETSIZE];
};

bool empty(int arr[]) {
  return false;
}

int size(int arr[]) {
  return 0;
}

int top(int arr[]) {
  return 0;
}

void push(int Value) {
  return;
}

int pop() {
  return 0;
}

void runTests() {
  //TODO: implement test cases
  Unit unit;
  unit.assertEquals("Failure",pop(),2);
}

int main(int argc, char *argv[]) {
    if(argc == 1) {
      runTests();
    } else {
      std::cout << "TO IMPLEMENT LATER" << std::endl;
    }
    return 0;
}
