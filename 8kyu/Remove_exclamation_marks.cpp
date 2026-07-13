/*
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/

#include <iostream>
#include <string>
#include <algorithm>

std::string removeExclamationMarks(std::string str){
  str.erase(std::remove(str.begin(), str.end(), '!'), str.end());
  return str;
}

int main(){
  std::string a = "ad!!!! df!";
  std::cout << removeExclamationMarks(a) << std::endl;
  return 0;
}
