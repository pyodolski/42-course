#include <iostream>

typedef struct
{
	std::string name;
	int age;
} Data;

class Serializer
{
public: // uintptr_t : 부호없는 정수 타입
	static uintptr_t serialize(Data *data);
	static Data *deserialize(uintptr_t raw);

private:
	explicit Serializer(); // 잘못된 암묵적 변환 금지
	Serializer(const Serializer &src);
	~Serializer();

	Serializer &operator=(const Serializer &rhs);
};