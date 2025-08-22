#include <iostream>
#include "iter.hpp"

int main()
{
	int nums[5] = {1, 2, 42, 69, 420};
	iter(nums, 5, print<const int>);

	std::string strs[3] = {"hello", "world", "!"};
	iter(strs, 3, print<const std::string>);

	return 0;
}