#include <iostream>

template <typename T>
// 어떤 타입이 들어와도 동작할 수 있게 해주는 template
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T &max(T &a, T &b)
{
	return (a > b ? a : b);
}

template <typename T>
T &min(T &a, T &b)
{
	return (a < b ? a : b);
}