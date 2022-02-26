#include <iostream>
#include <vector>

int main()
{
    std::vector<int> array {0,1,2,3,4};
    array.resize(3);

    std::cout<<"The length is: "<<array.size()<<'\n';

    for (auto &ele: array)
        std::cout<<ele<<' ';

    return 0;
}