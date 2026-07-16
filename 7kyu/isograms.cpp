/*
An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)
*/

#include <string>
#include <cctype>
bool is_isogram(const std::string& str)
{
  int count[26]{0};
  for(char i: str){
    ++count[std::tolower(i)-'a'];
  }
  for(int i: count){
    if(i > 1) return false;
  }
  return true;
}
