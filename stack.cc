/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a stack using c++11 std from scratch
 * Date: October 27, 2014
 */

#include <iostream>
#include "stack.h"

myStack::myStack(int startingTop, int startingLength) {
  topIndex = startingTop;
  maxSize = startingLength;
  p = new int[startingLength];
  return;
}

bool myStack::empty(int arr[]) {
  return false;
}

int myStack::size(int arr[]) {
  return 0;
}

int myStack::top() {
  return topIndex;
}

void myStack::push(int val) {
  p[topIndex] = val;
  topIndex++;
  return;
}

int myStack::pop() {
  return 1;
}

void myStack::reSize() {
  return;
}

