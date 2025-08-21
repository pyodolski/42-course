#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data data = {"jupyo", 42};

	uintptr_t raw = Serializer::serialize(&data);

	std::cout << "Raw: " << raw << std::endl;

	const Data *data2 = Serializer::deserialize(raw);

	std::cout << "Name: " << data2->name << std::endl;
	std::cout << "Age: " << data2->age << std::endl;

	return 0;
}