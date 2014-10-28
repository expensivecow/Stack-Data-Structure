/* Author(s): Michael Cao, Jason Too
 * Goal: Implement a stack using c++11 std from scratch
 * Date: October 27, 2014
 */

#include <iostream>
#include "stack.h"

myStack::myStack() {
  int* p = new int[10];
  for(int i = 0; i<10; i++) {
    p[i] = 0; //initialize all p to 0
  }
  int topIndex = 0;
}

bool myStack::empty(int arr[]) {
  return false;
}

int myStack::size(int arr[]) {
  return 0;
}

int myStack::top(int arr[]) {
  return 0;
}

void myStack::push(int Val) {
  return;
}

int myStack::pop() {
  return 1;
}

void myStack::reSize() {
  return;
}

