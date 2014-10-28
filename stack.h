/* File: Stack.h
 * Goal: Create and implement Stack functionality
 * Date: October 28, 2014
 *
 */

class myStack {
 int topIndex;
 public:
  myStack(void);
  bool empty(int[]);
  int size(int[]);
  int top(int[]);
  void push(int);
  int pop(void);
  void reSize(void);
};
