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

bool myStack::empty() {
  return (topIndex == 0? true:false);
}

int myStack::size() {
  return topIndex;
}

int myStack::top() {
  return p[topIndex-1];
}

void myStack::push(int val) {
  if(topIndex == maxSize) {
    reSize(2*maxSize);
  }
  p[topIndex] = val;
  topIndex++;
  return;
}

int myStack::pop() {
  if(topIndex == 0) {
    std::cout << "The stack is empty" << std::endl;
    return 0;
  } else {
    int topVal = p[topIndex-1];
    topIndex--;
    return topVal;
  }
}

void myStack::reSize(int capacity) {
  int* temp = p;
  p = new int[capacity];
  for(int i=0;i<capacity;i++) {
    p[i] = temp[i];
  }
  maxSize *= 2;
  delete temp;
  temp = NULL;
  return;
}

void myStack::displayStack() {
  std::cout << std::endl << "Stack from bottom to top: ";
  for(int i=0; i<topIndex; i++) {
    std::cout << p[i] << " ";
  }
  std::cout << std::endl;
  return;
}

int myStack::getMaxSize() {
  return maxSize;
}

int* myStack::returnArr() {
  return p;
}
