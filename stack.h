/* File: Stack.h
 * Goal: Create and implement Stack functionality
 * Date: October 28, 2014
 *
 */

class myStack {
public:
  myStack(int, int);

  bool empty(int[]);
  int size(int[]);
  int top();
  void push(int);
  int pop();
  void reSize();

private:
  int* p;
  int topIndex;
  int maxSize;
};
