#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	int i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Generated A" << std::endl;
		return new A();
	}
	else if (i == 1)
	{
		std::cout << "Generated B" << std::endl;
		return new B();
	}
	else
	{
		std::cout << "Generated C" << std::endl;
		return new C();
	}
}

void identify(Base *p)
// A * or nullptr
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
    // 좌변 필수, false -> bad_cast
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception &e)
	{
	}

	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception &e)
	{
	}
}

int main()
{
	srand(time(NULL));

	Base *ptr = generate();
	Base &ref = *ptr;

	identify(ptr);
	identify(ref);

	delete ptr;

	return 0;
}