#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> arr(5);
    for (unsigned int i = 0; i < arr.size(); i++)
        arr[i] = (i + 1) * 10;

    std::cout << "Original array: ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    // 복사 생성자 테스트
    Array<int> copy(arr);
    std::cout << "Copied array:   ";
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;

    // 대입 연산자 테스트
    Array<int> assigned(5);
    assigned = arr;  
    std::cout << "Assigned array: ";
    for (unsigned int i = 0; i < assigned.size(); i++)
        std::cout << assigned[i] << " ";
    std::cout << std::endl;

    arr[0] = 999;

    std::cout << "Original array: ";
    for (unsigned int i = 0; i < arr.size(); i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    std::cout << "Copied array:   ";
    for (unsigned int i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << std::endl;

    std::cout << "Assigned array: ";
    for (unsigned int i = 0; i < assigned.size(); i++)
        std::cout << assigned[i] << " ";
    std::cout << std::endl;

    // 5) 예외 테스트
    try {
        arr[10] = 100;   // 범위 벗어난 접근
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
