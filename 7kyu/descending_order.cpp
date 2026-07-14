/*
Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.
Examples:

Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/

#include <iostream>
#include <cinttypes>
#include <vector>

void bubbleSort(std::vector<uint64_t>& a){
  for(size_t i = 0; i < a.size(); ++i){
    bool sorted = true;
    for(size_t g = a.size()-1; g > i; --g){
      if(a[g-1] < a[g]){
        std::swap(a[g-1],a[g]);
        sorted = false;
      }
    }
    if(sorted) return;
  }
}

//#include <algorithm>

uint64_t descendingOrder(uint64_t a){
  uint64_t answ = 0;
  std::vector<uint64_t> b;
  while (a > 0){
    b.push_back(a%10);
    a/=10;
  }
  bubbleSort(b);

  //std::sort(b.rbegin(), b.rend());

  for(auto i: b){
    answ = answ*10+i;
  }
  return answ;
}

int main(){
  uint64_t a = 123456789;
  std::cout << descendingOrder(a) << std::endl;
  return 0;
}
