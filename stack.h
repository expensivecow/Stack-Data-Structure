/* File: Stack.h
 * Goal: Create and implement Stack functionality (creates a stack class)
 * Date: October 28, 2014
 */

class myStack {
public:
  myStack(int, int); //constructor

  bool empty(int[]);
  int size(int[]);
  int top();
  void push(int);
  int pop();
  void reSize(int);
  void displayStack();
  int getMaxSize();
  int* returnArr();
  
private:
  int* p;
  int topIndex;
  int maxSize;
};
