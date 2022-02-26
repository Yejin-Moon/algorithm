#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec {1,2,3,4,5};
    vec.push_back(1);
    vec.push_back(2);
    vec.insert(vec.begin(), 0);

    for (auto const &ele: vec)
        std::cout<<ele<<' ';

    return 0;
}

