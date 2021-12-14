#include <iostream>
#include <array>

int main()
{
    std::array<int,5> arr = {1,2,3,4,5};
    std::cout << arr.front() << std::endl; //배열의 첫번째 원소 출력
    std::cout << arr.back() << std::endl; //배열의 마지막 원소 출력
    std::cout << *(arr.data()+1) <<std::endl; //두번째 원소의 포인터가 가리키는 값(원소) 출력
}