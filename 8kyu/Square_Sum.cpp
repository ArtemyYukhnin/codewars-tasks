/*
Complete the square sum function so that it squares each number passed into it and then sums the results together.

For example, for [1, 2, 2] it should return 9: 1 + 4 + 4
*/

#include <vector>
#include <numeric>
int square_sum(const std::vector<int>& numbers)
{
    return std::accumulate(numbers.begin(), numbers.end(), 0, [](int x, int y){ return x+y*y;});
}


