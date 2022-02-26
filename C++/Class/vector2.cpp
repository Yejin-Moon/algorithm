#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {0,1,2,3,4,5,6,7,8,9};

    vec.pop_back();
    vec.erase(vec.begin());
    vec.erase(vec.begin() + 1, vec.begin() + 4);

    for (auto &ele: vec)
        std::cout<<ele<<' ';

    return 0;
}