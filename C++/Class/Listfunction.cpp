#include <iostream>
#include <string>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> list1 = {2, 53, 1, 0, 4, 10};
    list1.reverse();
    for(auto &ele:list1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    list1 = {0, 1, 0, 1, -1, 10, 5, 10, 0};
    list1.unique();
    for(auto &ele:list1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    list1 = {0, 1, 0, 1, -1 ,10 ,5, 5, 10, 0};
    list1.sort();
    for(auto &ele:list1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
    list1.unique();
    for(auto &ele:list1)
    {
        cout<<ele<<" ";
    }
    cout<<endl;

    list1.unique([](int a, int b){ return (b-a)<2;});
    for(auto &ele:list1)
        cout<<ele<<" ";
    cout<<endl;
}