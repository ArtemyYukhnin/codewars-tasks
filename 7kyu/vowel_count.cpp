/*
Return the number (count) of vowels in the given string.

We will consider a, e, i, o, u as vowels for this Kata (but not y).

The input string will only consist of lower case letters and/or spaces.
*/

#include <string>
#include <algorithm>

int getCount(const std::string& str){
  return std::count(str.begin(), str.end(), 'a') + std::count(str.begin(), str.end(), 'e') + std::count(str.begin(), str.end(), 'i') + std::count(str.begin(), str.end(), 'o') + std::count(str.begin(), str.end(), 'u');
}

#include <iostream>
int main(){
  std::string a = "abracadabra";
  std::cout << getCount(a) << std::endl;
  return 0;
}
