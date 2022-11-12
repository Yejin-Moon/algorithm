#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    long long res=0;
    map<string,int> val;
    map<string,int> mul;
    val.insert({"black",0});
    val.insert({"brown",1});
    val.insert({"red",2});
    val.insert({"orange",3});
    val.insert({"yellow",4});
    val.insert({"green",5});
    val.insert({"blue",6});
    val.insert({"violet",7});
    val.insert({"grey",8});
    val.insert({"white",9});

    mul.insert({"black",1});
    mul.insert({"brown",10});
    mul.insert({"red",100});
    mul.insert({"orange",1000});
    mul.insert({"yellow",10000});
    mul.insert({"green",100000});
    mul.insert({"blue",1000000});
    mul.insert({"violet",10000000});
    mul.insert({"grey",100000000});
    mul.insert({"white",1000000000});

    string s;
    cin>>s;
    int v = val[s];
    res+=v*10;

    cin>>s;
    res+=val[s];

    cin>>s;
    res*=mul[s];
    cout<<res;
}