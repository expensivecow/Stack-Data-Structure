/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a stack using c++11 std from scratch
 * Date: October 27, 2014
 */

#include <iostream>
#include "unit.h"
#include "stack.h"

void runTests() {
  Unit unit;

  myStack stack (0,10);
  unit.assertTrue("Stack should be empty(#1)", stack.empty());

  stack.push(3), stack.push(2), stack.push(1), stack.push(3);
  stack.push(5), stack.push(2), stack.push(4);
  unit.assertFalse("Stack should not be empty(#2)", stack.empty());

  myStack secondStack (0,10);
  unit.assertEquals("Size should be 0(#3)" , 0, secondStack.size());
  unit.assertEquals("Size should be 7(#4)" , 7, stack.size());

  //print out stack is empty on screen
  unit.assertEquals("top() on an empty stack should be 0(#5)", secondStack.top(), 0); 
  unit.assertEquals("top() on an array with values should return the last value(#6)", stack.top(), 4);

  int *expected = new int[1];
  expected[0] = 8;

  secondStack.push(8);
  unit.assertpointerEquals("Pushing value onto empty array gives it a value(#7)", expected, secondStack.returnArr(), 1);

  unit.assertEquals("Popping character off non-empty array should return a value(#8)", 8, secondStack.pop());

  secondStack.pop(); //not sure if i have to catch the value or not

  unit.assertEquals("Popping an empty stack should return 0(#9)", 0, secondStack.pop());
  unit.printResults();
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
