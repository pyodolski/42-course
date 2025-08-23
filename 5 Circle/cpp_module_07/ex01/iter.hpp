#include <iostream>
// #include <iomanip>

template <typename T>
void iter(T *array, size_t size, void (*f)(const T &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void print(const T &data)
{
	std::cout << data << std::endl;
    // std::cout << std::fixed << std::setprecision(1) << data << std::endl;
}