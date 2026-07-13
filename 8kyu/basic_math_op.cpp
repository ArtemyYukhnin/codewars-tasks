/*
Your task is to create a function that does four basic mathematical operations.

The function should take three arguments - operation(string/char), value1(number), value2(number).
The function should return result of numbers after applying the chosen operation.
Examples(Operator, value1, value2) --> output

('+', 4, 7) --> 11
('-', 15, 18) --> -3
('*', 5, 5) --> 25
('/', 49, 7) --> 7
*/

#include <iostream>

int basicOp(char op, int val1, int val2) {
  switch(op){
	case '+':
	  return val1+val2;
	case '-':
	  return val1-val2;
	case '*':
	  return val1*val2;
	case '/':
	  return val1==0?0:val1/val2;
	default:
	  return 0;
  }
}


int main(){
  int val1 = 10;
  int val2 = 5;
  std::cout << "10 + 5 = " << basicOp('+', val1, val2) << std::endl;
  std::cout << "10 - 5 = " << basicOp('-', val1, val2) << std::endl;
  std::cout << "10 * 5 = " << basicOp('*', val1, val2) << std::endl;
  std::cout << "10 / 5 = " << basicOp('/', val1, val2) << std::endl;
  return 0;
}
