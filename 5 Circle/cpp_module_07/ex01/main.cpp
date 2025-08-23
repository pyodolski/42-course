#include <iostream>
#include "iter.hpp"

int main()
{
	int nums[5] = {1, 2, 42, 69, 420};
	iter(nums, 5, print<const int>);

	std::string strs[3] = {"hello", "world", "!"};
	iter(strs, 3, print<const std::string>);

    // double num[5] = {1.0, 2.0, 42.0, 69.0, 420.0};
	// iter(num, 5, print<const double>);

    // float numf[5] = {1.0f, 2.0f, 42.0f, 69.0f, 420.0f};
    // iter(numf, 5, print<const float>);

	return 0;
}