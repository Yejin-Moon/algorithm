#include <iostream>
#include <forward_list>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vec = {
        "Lewis", "Lewis", "Nico", "Sebastian", "Lewis","Sebastian",
        "Sebastian", "Sebastian", "Fernando"
    };

    auto it = vec.begin();
    cout<<"Most Recent Winner: " <<*it<<endl;
    it+=8;
    cout<<"Winner 8 years ago: "<<*it<<endl;
    advance(it,-3);
    cout<<"Winnder 3 years later: "<<*it<<endl;

    forward_list<string> fwd(vec.begin(), vec.end());

    auto it1 = fwd.begin();
    cout<<"Most resent winner: "<<*it1<<endl;

    advance(it1, 5);
    cout<<"Winner 5 years ago: "<<*it1<<endl;
}