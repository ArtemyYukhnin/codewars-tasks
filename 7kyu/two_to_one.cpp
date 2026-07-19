/*
Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string (alphabetical ascending), the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.
Examples:

a = "xyaabbbccccdefww"
b = "xxxxyyyyabklmopq"
longest(a, b) -> "abcdefklmopqwxy"

a = "abcdefghijklmnopqrstuvwxyz"
longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"
*/

#include <algorithm>
#include <string>

class TwoToOne
{
public:
  static std::string longest(const std::string &s1, const std::string &s2){
    std::string answ;
    int num[26]{0};
    for(char i: s1){
      if(num[i-'a'] != 0){
        continue;
      }
      answ.push_back(i);
      num[i-'a'] = 1;
    }

    for(char i: s2){
      if(num[i-'a'] != 0){
        continue;
      }
      answ.push_back(i);
      num[i-'a'] = 1;
    }

    std::sort(answ.begin(), answ.end());
    return answ;
  }
};

/*
#include <algorithm>
#include <string>

class TwoToOne
{
public:
    static std::string longest(const std::string &s1, const std::string &s2){
      std::string answ = s1+s2;
      std::sort(answ.begin(), answ.end());
      answ.erase(std::unique(answ.begin(), answ.end()), answ.end());
      return answ;
    }
};
*/
