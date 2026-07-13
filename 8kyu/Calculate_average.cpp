/*
Write a function which calculates the average of the numbers in a given array.

Note: Empty arrays should return 0.
*/

#include <iostream>
#include <algorithm>
#include <vector>

double calc_average(const std::vector<double>& values)
{
  double answ = 0.0;
  std::for_each(values.begin(), values.end(), [&](double x){answ+=x;});
  return values.size()==0?0.0:answ/values.size();
}

int main(){
  std::vector<double> values{1.1, 2.2, 3.3};
  std::cout << calc_average(values) << std::endl;
  return 0;
}
