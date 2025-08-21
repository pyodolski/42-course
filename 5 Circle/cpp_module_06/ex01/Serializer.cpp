#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(const Serializer &src)
{
}

Serializer::~Serializer()
{
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	return *this;
}

uintptr_t Serializer::serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}