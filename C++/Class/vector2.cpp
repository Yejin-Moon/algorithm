#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {0,1,2,3,4,5,6,7,8,9};

    vec.pop_back();
    vec.erase(vec.begin());
    vec.erase(vec.begin() + 1, vec.begin() + 4);

    for (auto &ele: vec)
        cout<<ele<<' ';

    return 0;
}