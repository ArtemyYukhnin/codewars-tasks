/*
Implement a function which convert the given boolean value into its string representation.

Note: Only valid inputs will be given.
*/

#include <string>
#include <iostream>

std::string boolean_to_string(bool b){
  return b?"true":"false";
}


int main(){
  bool b = 1;
  std::cout << boolean_to_string(b) << std::endl;
  return 0;
}
