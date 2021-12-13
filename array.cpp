#include <array>
#include <iostream>

void print(std::array<int,5> arr)
{
    for (auto ele : arr){
        std::cout << ele << ",";
    }
}

int main()
{
    int a;
    std::array<int, 10> arr1;
    arr1[0] = 1;
    std::cin>>a;
    std::cout << "arr1: " <<arr1[0]<<std::endl;
    std::cout<<"int a = "<<a<<std::endl;

    std::array<int, 4> arr2 = {1,2,3,4};
    std::cout <<"arr2 elements : ";

    for (int i =0;i<arr2.size();i++)
    {
        std::cout<< arr2[i]<<" ";
    }
    std::cout<<std::endl;

    std::array<int,5> arr = {1,2,3,4,5};
    //print(arr);
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        auto element = (*it);
        std::cout << element << ' ';
    }
}

