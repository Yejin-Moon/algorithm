#include <iostream>
#include <array>
using namespace std;

int main()
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