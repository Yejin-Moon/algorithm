#include <iostream>
#include <array>
using namespace std;

/*int main()
{
    array<int, 4> arr = {1,2,3,4};

    try
    {
        cout<<arr.at(3)<<endl;
        cout<<arr.at(4)<<endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
*/
template <size_t N>
void print(const array<int, N>& arr);

void print(array<int,5> arr)
{
    for (auto ele:arr)
        cout<<ele<<" ";
}

int main()
{
    array<int, 5> arr = {1,2,3,4,5};
    print(arr);
}