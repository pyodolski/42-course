#include "ScalarConverter.hpp"
#include <limits>

std::string ScalarConverter::str;
t_type ScalarConverter::type;

// 생성자
ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &src){}
ScalarConverter::~ScalarConverter(){}
// 연산자오버로딩
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs)
{
	return *this;
}

void ScalarConverter::convert(const std::string &str)
{
	if (str.length() == 0)
        throw SC::InvalidScalarException();

	SC::str = str;
	SC::setType(str);

	switch (SC::type)
	{
	case CHAR:
		SC::printChar();
		break;
	case NUMBER:
		SC::printNumber();
		break;
	case SPECIAL:
		SC::printSpecial();
		break;
	case INVALID:
		throw SC::InvalidScalarException();
		break;
	}
}

void ScalarConverter::setType(const std::string &str)
{
	if (SC::isChar())
		SC::type = CHAR;
	else if (SC::isNumber())
		SC::type = NUMBER;
	else if (SC::isSpecial())
		SC::type = SPECIAL;
	else
		SC::type = INVALID;
}

bool ScalarConverter::isChar()
{
	return SC::str.length() == 1 && !std::isdigit(SC::str[0]);
}

bool ScalarConverter::isNumber()
{
	size_t i = (SC::str[0] == '-' || SC::str[0] == '+') ? 1 : 0;
	bool dotSeen = false;

	if (!std::isdigit(SC::str[i]) && SC::str[i] != '.')
		return false;
	while (i < SC::str.length())
	{
		if (SC::str[i] == '.')
		{
			if (dotSeen)
				return false;
			dotSeen = true;
		}
		else if (!std::isdigit(SC::str[i]))
			break;
		i++;
	}
	if (str[i] == 'f' && (std::isdigit(SC::str[i - 1]) || SC::str[i - 1] == '.'))
		i++;
	return i == SC::str.length();
}

bool ScalarConverter::isSpecial()
{
	return ( // IEEE 754 부동소수 특수값 표현
			SC::str.compare("-inff") == 0 || // float 음수 무한대
			SC::str.compare("+inff") == 0 || // float 양수 무한대
			SC::str.compare("nanf") == 0 ||  // NotNum float
			SC::str.compare("-inf") == 0 ||  // double 음수 무한대
			SC::str.compare("+inf") == 0 ||  // double 양수 무한대
			SC::str.compare("nan") == 0);    // double Notnum 
}

void ScalarConverter::printChar()
{
	double value = 0;

	value = double(str[0]); // 명시적 캐스팅
	if (isprint(str[0]))
		std::cout << "char: " << str[0] << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(value) << std::endl;
	std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::printNumber()
{
	double value = 0;

	try
	{
		value = std::stod(SC::str); // double로 변환
	}
	catch (const std::out_of_range &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}

	if (value > std::numeric_limits<char>::max() || value < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else if (isprint(static_cast<char>(value)))
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else
		std::cout << "char: non displayable" << std::endl;
	if (value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(value) << std::endl;
}

void ScalarConverter::printSpecial()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}