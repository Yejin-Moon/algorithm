#include <iostream>
#include <map>
#include <string>
using namespace std;

map<string, int> mapset;

int main()
{
    mapset.insert({"Alice",100});
    mapset.insert({"Bob",200});

    if(mapset.find("Alice")!=mapset.end())
    {
        cout<<"find"<<endl;
    }
    else
    {
        cout<<"not find"<<endl;
    }

    for(auto iter = mapset.begin(); iter != mapset.end(); iter++)
    {
        cout<<iter->first<<" "<<iter->second<<endl;
    }
    cout<<endl;

    for(auto iter:mapset)
    {
        cout<<iter.first<<" "<<iter.second<<endl;
    }
    return 0;
}