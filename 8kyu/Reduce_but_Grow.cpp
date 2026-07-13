>/*
Given a non-empty array of integers, return the result of multiplying the values together in order. Example:

[1, 2, 3, 4] => 1 * 2 * 3 * 4 = 24
*/

#include <iostream>
#include <vector>
#include <algorithm>

int grow(std::vector<int> nums) {
  int answ = 1;
  std::for_each(nums.begin(), nums.end(), [&](int x){answ*=x;});
  return nums.size()==0?0:answ;
}

int main(){
  std::vector<int> nums{1,2,3,4};
  std::cout << grow(nums) << std::endl;
  return 0;
}
