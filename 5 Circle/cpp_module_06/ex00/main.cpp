#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, const char *argv[])
{
	if (argc != 2)
	{
		std::cout << "usage: ./convert <arg>" << std::endl;
		return 1;
	}

	try
	{
		ScalarConverter::convert(argv[1]);
	}
	catch (ScalarConverter::InvalidScalarException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}